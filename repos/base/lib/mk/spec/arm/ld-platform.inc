ifeq ($(filter-out $(SPECS),armhf_v7a),)
	INC_DIR += $(BASE_DIR)/include/spec/armhf_v7a
endif

include $(BASE_DIR)/lib/mk/ld-platform.inc

INC_DIR += $(DIR)/spec/arm
vpath %.s $(DIR)/spec/arm
