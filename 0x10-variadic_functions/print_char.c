#include "variadic_functions.h"
#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: defined the print_char helper function
 */

void print_char(va_list *args)
{
	printf("%c", va_arg(*args, int));
}

