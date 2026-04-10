#include "3-calc.h"
#include <string.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: with this function we control how to loop and get user's
 * operation choice
 */

int (*get_op_func(char *s))(int, int) {
  int i = 0;
  op_t ops[] = {
      {"+", op_add}, {"-", op_sub}, {"*", op_mul},
      {"/", op_div}, {"%", op_mod}, {NULL, NULL},
  };

  while (ops[i].op != NULL) {
    if (strcmp(ops[i].op, s) == 0)
      return ops[i].f;

    i++;
  }
  return NULL;
}
