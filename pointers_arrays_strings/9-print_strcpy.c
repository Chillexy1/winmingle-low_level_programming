#include "main.h"
#include <string.h>


/*
*Authour: Chillexy Steven  
*Program: WinMingle Community C Training
*Description: this is a function that copies a file from SRC ti DEST
* compilation: xompilling with -Wall -Werror -Wextra -pedantic -std=gnu99 cause variable length arrays we use in the main function to get length of src  are a C99 feature
*/

char *_strcpy(char *dest, char *src) {
   int i = 0, j;

   while (src[i] != '\0'){
       _putchar(src[i]);
       i++;
   }
   _putchar('\n');

   strcpy(dest, src);
   j = 0;
   while(dest[j] != '\0'){
       _putchar(dest[j]);
       j++;
   }
   _putchar('\n');

  return 0; 
   
}
