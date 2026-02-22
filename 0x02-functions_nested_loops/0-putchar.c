#include "main.h"

/*
*Authour: Chillexy Steven                                                            *Program: WinMingle Community C Training
*Description: this prints out "_putchar" with a new line without using the global variables and standard libaries of such any. 
*/

int main(void)
{
    char c;
    int i = 0;
    char a[] = "_putchar";

    while(i < 8)
    {
        c = a[i];
        _putchar(c);

        i++;
    }
    _putchar('\n');

    return 0;
}

