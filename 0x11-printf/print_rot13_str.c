#include "main.h"
#include <string.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this function converts a string to it's 13th places in the
 * alphabet table and prints it out
 */

void print_rot13_str(char *ch, char *buffer, int *index) {
  int i = 0;
  char str;

  if (ch == NULL)
    return;

  while (ch[i]) {

    if (ch[i] >= 'a' && ch[i] <= 'z')
      str = 'a' + ((ch[i] - 'a' + 13) % 26);

    else if (ch[i] >= 'A' && ch[i] <= 'Z')
      str = 'A' + ((ch[i] - 'A' + 13) % 26);

    store_buffer(str, buffer, index);
    i++;
  }
}
