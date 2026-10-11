#include "main.h"
#include <unistd.h>
/*
*Authour: Chillexy Steven                                                            *Program: WinMingle Community C Training
*Description: implement the custom putchar function
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

