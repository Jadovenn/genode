ifeq ($(filter-out $(SPECS),armhf_v7a),)
	INC_DIR += $(REP_DIR)/src/lib/jitterentropy/spec/armhf_v7a
	INC_DIR += $(BASE_DIR)/include/spec/armhf_v7a
else
	INC_DIR += $(REP_DIR)/src/lib/jitterentropy/spec/arm_v7
endif

include $(REP_DIR)/lib/mk/jitterentropy.inc

CC_CXX_WARN_STRICT =
