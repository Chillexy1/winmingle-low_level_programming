#include "main.h"
#include <stdlib.h>

/*
 *Authour: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: break a string into separate words and return a NULL-terminated
 * array of strings.
 */

char **strtow(char *str) {
  int start, k = 0, len, j = 0, i = 0, words = 0;
  char **array;

  if (str == NULL || *str == '\0')
    return NULL;

  // count words in the string
  while (str[i] != '\0') {
    while (str[i] == ' ')
      i++;
    if (str[i] != '\0') {
      words++;
      while (str[i] != '\0' && str[i] != ' ')
        i++;
    }
  }

  array = malloc(sizeof(char *) * (words + 1));
  if (array == NULL)
    return NULL;

  i = 0;
  // strtow words
  while (str[i] != '\0') {
    while (str[i] == ' ')
      i++;
    if (str[i] != '\0') {
      start = i;
      len = 0;

      while (str[i] != '\0' && str[i] != ' ') {
        i++;
        len++;
      }
      array[k] = malloc(sizeof(char) * (len + 1));
      if (array[k] == NULL) {
        int x;
        for (x = 0; x < k; x++)
          free(array[x]);
        free(array);
        return NULL;
      }

      for (j = 0; j < len; j++)
        array[k][j] = str[start + j];

      array[k][j] = '\0';
      k++;
    }
  }
  array[k] = NULL;
  return array;
}
