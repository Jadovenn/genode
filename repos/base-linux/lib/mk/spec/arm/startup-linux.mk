ifeq ($(filter-out $(SPECS),armhf_v7a),)
	INC_DIR += $(BASE_DIR)/include/spec/armhf_v7a
endif

include $(BASE_DIR)/lib/mk/spec/arm/startup.inc
