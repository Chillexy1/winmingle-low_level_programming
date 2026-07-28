#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this buffer implementation stores buffer in the array of index <
 * less thsn 1024 characters
 */
void store_buffer(char c, char *buffer, int *index) {
  buffer[*index] = c;
  (*index)++;

  if (*index == BUFFER) {
    flush_buffer(buffer, index);
  }
}
