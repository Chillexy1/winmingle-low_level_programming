#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this program outputs the last digit of a random number with a cobdition that ita either equals to 0, greater than 5, less than 6 and not 0 
 */

int main(void){
    int n;

    char str[20];
    char last_char;
    int last_digit;

    srand(time(NULL)); /* we use this to avoid repetition of a random number */


    n = rand(); /* we assign a r andom numver to n */


    sprintf(str, "%d", n); /* we convert the randomly generated to a string in order to get the last digit */

    last_char = str[strlen(str) -1]; /* we get the lenght of the string and access the last digit with (-1) */

    last_digit = last_char - '0'; /* with (-'0'(ASCII)) we convert the last digit to an integer */

    if(last_digit < 6 && last_digit != 0){
        printf("the last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
    }
    else if(last_digit == 0){
        printf("the last digit of %d is %d and is 0\n",n, last_digit);
    }
    else if(last_digit > 5){
        printf("the last digit of %d is %d and is greater than 5\n", n,last_digit);
    }

    return(0);

}
