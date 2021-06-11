ifeq ($(filter-out $(SPECS),armhf_v7a),)
	INC_DIR += $(BASE_DIR)/include/spec/armhf_v7a
endif

SRC_CC = lib_dl.cc
SHARED_LIB = yes
LIBS = test-ldso_lib_1
INC_DIR += $(REP_DIR)/src/test/ldso/include
vpath % $(REP_DIR)/src/test/ldso

CC_CXX_WARN_STRICT =
