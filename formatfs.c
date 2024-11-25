// CSC 4103 Prog3 
// Shawn Russell 
#include <stdio.h>
#include "filesystem.h"
#include "softwaredisk.h"

int main(int argc, char *argv[]) {
  printf("Checking data structure sizes and alignments.\n");
  if (! check_structure_alignment()) {
      printf("Check failed. File System isn't valid. \n");
  }
  else {
    printf("Check succeeded.\n");
    printf("Initializing filesystem\n");
    init_software_disk(); 
    printf("Done.\n");
  }
  return 0;
}