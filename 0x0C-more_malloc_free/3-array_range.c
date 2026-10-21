#include "main.h"
#include <stdlib.h>

/*
 *Authour: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this is a functuon that creates an array of integers from min to
 * max in order of sequence
 */

int *array_range(int min, int max) {
  int i;
  int *range;

  if (min > max)
    return NULL;

  range = malloc(sizeof(int) * (max-min+1));/*allocats with the length of inters*/
  if (range == NULL)
    return NULL;

  for (i = min; i <= max; i++)
    range[i - min] = i;/*i changes each iteration, but min stays at 3. Subtracting min from each i iteration*/

  return range;
}
