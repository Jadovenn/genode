SRC_CC = vfs_audit.cc

ifeq ($(filter-out $(SPECS),armhf_v7a),)
	INC_DIR += $(BASE_DIR)/include/spec/armhf_v7a
endif

vpath %.cc $(REP_DIR)/src/lib/vfs/audit

SHARED_LIB = yes
