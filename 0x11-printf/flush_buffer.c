#include "main.h"
#include <unistd.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: flushes the buffer and prints out saved characters to the
 * terminal
 */

void flush_buffer(char *buffer, int *index) {
  write(1, buffer, *index);
  *index = 0;
}
