#include "function_pointers.h"
#include <string.h>
/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this is ia function pointer that prints out the the name of a
 * string
 */

void print_name(char *name, void (*f)(char *)) {
  if (name != NULL && f != NULL)
    f(name);
}
