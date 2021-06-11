TARGET   = linux_timer_drv
GEN_DIR := $(call select_from_repositories,src/timer/periodic)/..
INC_DIR += $(GEN_DIR)/periodic
SRC_CC  += periodic/time_source.cc time_source.cc
LIBS    += syscall-linux

ifeq ($(filter-out $(SPECS),armhf_v7a),)
	INC_DIR += $(BASE_DIR)/include/spec/armhf_v7a
endif

include $(GEN_DIR)/target.inc

vpath periodic/time_source.cc $(GEN_DIR)
