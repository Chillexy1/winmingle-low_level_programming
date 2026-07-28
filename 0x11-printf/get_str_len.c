#include "main.h"
/*
 * fuction to get the length of any strings
 */

int string_len(char *str) {
  int i = 0;

  while (str && str[i]) {
    i++;
  }

  return i;
}
