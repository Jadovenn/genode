ifeq ($(filter-out $(SPECS),armhf_v7a),)
	INC_DIR += $(BASE_DIR)/include/spec/armhf_v7a
endif

SRC_CC = lib_2.cc
SHARED_LIB = yes
INC_DIR += $(REP_DIR)/src/test/ldso/include
vpath % $(REP_DIR)/src/test/ldso

CC_CXX_WARN_STRICT =
