TARGET = fs_rom
SRC_CC = main.cc
LIBS   = base

# This is needed for armhf_v7a because some size_t might be declare differently
# from one platform to another, thus not required for other platforms
ifeq ($(filter-out $(SPECS),armhf_v7a),)
	CC_CXX_WARN_STRICT_CONVERSION :=
endif
