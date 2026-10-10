#include <unistd.h>
/*
*Author: Chillexy Steven                     
*Program: WinMingle Community C Training
*Description: print out line of strings/words to the standard error 
 */
int main(void)
{
    write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n") -1);
    return(1);
}

