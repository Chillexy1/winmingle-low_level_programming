#include "main.h"
#include <stdlib.h>

/*
 *Authour: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this is a functuon that creates an array of integers from min to
 * max in order of sequence
 */

int *array_range(int min, int max) {
  int i, start, end;
  int *range;

  if (min > max)
    return NULL;

  start = min;
  end = max;

  range = malloc(sizeof(int) * (start + end));
  if (range == NULL)
    return NULL;

  for (i = start; i <= end; i++)
    range[start + i] = i;

  return range;
}
