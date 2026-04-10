#include <stdio.h>
#include <stdlib.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: funcrion on opcodes of our main function
 */

int main(int argc, char *argv[]) {
  int i, n;
  unsigned char *ptr = (unsigned char *)main;

  if (argc != 2) {
    printf("Error");
    exit(1);
  }

  n = atoi(argv[1]);

  if (n < 0) {
    printf("Error");
    exit(2);
  }

  for (i = 0; i < n; i++) {
    printf("%02x", ptr[i]);
    if (i != n - 1)
      printf(" ");
  }

  printf("\n");
  return 0;
}
