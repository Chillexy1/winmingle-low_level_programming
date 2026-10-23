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

void print_int(va_list *args) { printf("%d", va_arg(*args, int)); }

void print_float(va_list *args) { printf("%f", va_arg(*args, double)); }

void print_string(va_list *args) {
  char *str = va_arg(*args, char *);
  if (str == NULL) {
    printf("(nil)");
  }
  printf("%s", str);
}
