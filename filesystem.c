#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <limits.h>
#include "softwaredisk.h"
#include "filesystem.h"

#define DATA_BITMAP_BLOCK 0
#define INODE_MAP 1 //  
#define LAST_INODE 5 //LAST_INODE_BLOCK
#define MAX_NUMBER_OF_FILES 512 //MAX_FILES
#define INODES_PER_BLOCK 128
