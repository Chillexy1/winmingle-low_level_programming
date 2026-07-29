#include "main.h"

/*
 * returns the length of non_printable character string
 **/

int S_len(char *str) {
  int i;
  int len = 0;

  for (i = 0; str && str[i]; i++) {
    unsigned char c = (unsigned char)str[i];

    if (c < 32 || c >= 127)
      len += 4;
    else
      len += 4;
  }

  return (len);
}
