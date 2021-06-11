ifeq ($(filter-out $(SPECS),armhf_v7a),)
	INC_DIR += $(BASE_DIR)/include/spec/armhf_v7a
endif

SRC_C = so_support.c

vpath so_support.c $(call select_from_repositories,src/lib/ldso)
