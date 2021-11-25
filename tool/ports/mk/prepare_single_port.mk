#
# \brief  Tool for downloading and patching 3rd-party source code
# \author Norman Feske
# \date   2014-05-07
#

#
# Determine Genode base directory based on the known location of the
# 'create_builddir' tool within the Genode source tree
#
export GENODE_DIR := $(realpath $(dir $(MAKEFILE_LIST))/../../..)
export GENODE_CONTRIB_CACHE ?= $(GENODE_DIR)/contrib/cache

include $(GENODE_DIR)/tool/ports/mk/front_end.inc
include $(GENODE_DIR)/tool/ports/mk/check_port_arg.inc

_package_url := $(CI_API_V4_URL)/projects/$(CI_PROJECT_ID)/packages/generic/contrib.$(PORT_NAME)/$(HASH)/contrib.$(PORT_NAME).tar.xz
_download := $(shell curl --silent --header "JOB-TOKEN: $(CI_JOB_TOKEN)" $(_package_url) | tar xJf - -C $(CONTRIB_DIR) 1>&2 2> /dev/null; echo $$?)

ifeq ($(HASH),)
$(TARGET): nonexisting_hash
nonexisting_hash:
	@$(ECHO) "Error: Port $(PORT_NAME) lacks a valid hash"; false
endif

#
# Default rule that triggers the actual preparation steps
#
$(TARGET): _check_integrity

_check_integrity : _install_in_port_dir
ifneq ($(CHECK_HASH),no)
	$(VERBOSE)diff $(PORT_HASH_FILE) $(HASH_FILE) > /dev/null ||\
		($(ECHO) "Error: $(_REL_HASH_FILE) is out of date, expected" `cat $(PORT_HASH_FILE)` ""; false)
endif

#
# During the preparatio steps, the port directory is renamed. We use the suffix
# ".incomplete" to mark this transient state of the port directory.
#
_install_in_port_dir: $(PORT_DIR)

ifeq ($(_download),0)
	@$(MSG_DOWNLOAD_CI)$(_package_url)

else
	@$(ECHO) "FAILED TO DOWNLOAD FROM PACKAGE REGISTRY: $(PORT_NAME)"
	@$(ECHO) "   _download: $(download)"

	@#\
	 # if the transient directory already exists, reuse it as it may contain\
	 # finished steps such as downloads. By reusing it, we avoid downloading\
	 # the same files again and again while working on a port. However, in this\
	 # case, we already have created an empty port directory via the $(PORT_DIR)\
	 # rule below. To avoid having both the port directory and the transient\
	 # port directory present, remove the just-created port directory.\
	 #
	$(VERBOSE)(test -d $(PORT_DIR).incomplete && rmdir $(PORT_DIR)) || true
	@#\
	 # If no transient directory exists, rename the port directory accordingly.\
	 #
	$(VERBOSE)test -d $(PORT_DIR).incomplete || mv --force $(PORT_DIR) $(PORT_DIR).incomplete
	$(VERBOSE)$(MAKE) --no-print-directory \
	                  -f $(GENODE_DIR)/tool/ports/mk/install.mk \
	                  -C $(PORT_DIR).incomplete \
	                  PORT=$(PORT) VERBOSE=$(VERBOSE)
	@#\
	 # The preparation finished successfully. So we can rename the transient\
	 # directory to the real one.\
	 #
	$(VERBOSE)mv $(PORT_DIR).incomplete $(PORT_DIR)

	#$(VERBOSE)tar cJf "$(PORT_DIR).tar.xz" -C $(CONTRIB_DIR) --exclude="*/.git" $(notdir $(PORT_DIR))
	# FIXME: nova requires the .git directory when compiled using # tool/autopilot?!
	$(VERBOSE)tar cJf "$(PORT_DIR).tar.xz" -C $(CONTRIB_DIR) $(notdir $(PORT_DIR))

	@$(ECHO) "UPLOADING PORT TO PACKAGE REGISTRY: $(PORT_NAME)"
	$(VERBOSE)curl --silent --header "JOB-TOKEN: $(CI_JOB_TOKEN)" --upload-file "$(PORT_DIR).tar.xz" $(_package_url) || true

endif

$(PORT_DIR):
	$(VERBOSE)mkdir -p $@
