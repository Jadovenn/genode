#
# \brief  Portions of base library shared by core and non-core processes
# \author Norman Feske
# \date   2013-02-14
#

ifeq ($(filter-out $(SPECS),armhf_v7a),)
	INC_DIR += $(BASE_DIR)/include/spec/armhf_v7a
endif

include $(BASE_DIR)/lib/mk/base-common.inc

LIBS += syscall-linux

SRC_CC += region_map_mmap.cc debug.cc
SRC_CC += rpc_dispatch_loop.cc
SRC_CC += thread_env.cc
SRC_CC += capability.cc
SRC_CC += native_thread.cc
