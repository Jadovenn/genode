ifeq ($(filter-out $(SPECS),armhf_v7a),)
	INC_DIR += $(BASE_DIR)/include/spec/armhf_v7a
endif

LWIP_DIR := $(call select_from_ports,lwip)
INC_DIR += $(LWIP_DIR)/include/lwip
INC_DIR += $(call select_from_repositories,include/lwip)
