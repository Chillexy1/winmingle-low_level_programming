#include "variadic_functions.h"
#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: we going to use this function to create fetch the format we want
 * to call while using the struct we're created in our header file
 */

void print_char(va_list *args)
{
	char c;
	c = va_arg(*args, int);
	/*printf("%c", va_arg(*args, int));*/
	printf("%c\n", c);
}


