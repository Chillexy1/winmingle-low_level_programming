#include <stdio.h>

/* 
 *Authour: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: printing alphabet in lowercase and uppercase
 * */

int main(void){
    char c = 'a';
    while (c <= 'z')
    {
	    putchar(c);
	    c++;
    }
    c ='A';
    while (c <= 'Z')
    {
	    putchar(c);
	    c++;
    }
    putchar('\n');
    return (0);
}
