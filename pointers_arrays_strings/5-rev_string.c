#include "main.h"
#include <stdio.h>
/*
*Authour: Chillexy Steven 
*Program: WinMingle Community C Training
*Description: this function reverses a string.
* compilation: -Wall -Werror -Wextra -pedantic -std=gnu89
*/

void rev_string(char *s){
    int n;  //i;

    n = strlen(s) -1;

/*getting the len of the string to reverse*/
//    while(s[n] != '\0'){
  //      n++;
   // }
/* start from the last/end of the loop with "-1" */
   // i = s[n]-1;
    
    while(n >= 0){ /* i represents starting from the end of the loop we got earlier   */
        _putchar(s[n]);

        n--;
    }
    _putchar('\n');
}
