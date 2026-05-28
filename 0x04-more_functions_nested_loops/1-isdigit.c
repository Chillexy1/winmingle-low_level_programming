#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this function checks if a given input is an integer number or not
 */

int _isdigit(int c) {
  if (c >= '0' && c <= '9')
    return 1;
  else
    return 0;
}
