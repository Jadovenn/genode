TARGET = mkfs-fat32
LIBS   = fatfs_block base
SRC_CC = component.cc

CC_DEF  += -D_MAX_SS=FF_MAX_SS

CC_CXX_WARN_STRICT =
