#include "main.h"
/*
*Authour: Chillexy Steven  
*Program: WinMingle Community C Training
*Description: this is a function that copies a file from src to dest
* compilation: xompilling with -Wall -Werror -Wextra -pedantic -std=gnu99 cause variable length arrays we use in the main function to get length of src  are a C99 feature
*/

char *_strcpy(char *dest, char *src) {
   int i = 0, j = 0;
   while (src[i])
   {
	   dest[j] = src[i];
	   j++;
	   i++;
   }
   dest[j] = '\0';
  return (dest); 
   
}
