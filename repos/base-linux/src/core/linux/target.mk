TARGET   := core-linux
REQUIRES := linux
LIBS     := cxx base-linux-common startup-linux core-linux
BOARD    ?= unknown

ifeq ($(filter-out $(SPECS),armhf_v7a),)
	INC_DIR += $(BASE_DIR)/include/spec/armhf_v7a
	CC_CXX_WARN_STRICT_CONVERSION :=
endif

include $(BASE_DIR)/src/core/version.inc

LD_TEXT_ADDR    ?= 0x01000000
LD_SCRIPT_STATIC = $(BASE_DIR)/src/ld/genode.ld \
                   $(call select_from_repositories,src/ld/stack_area.ld)
