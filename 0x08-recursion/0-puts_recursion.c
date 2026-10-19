#include "main.h"
/*
*Author: Chillexy Steven   
*Program: WinMingle Community C Training
*Description: this is a function that prints out a string followed by a new line
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);/*print character one after the other*/
	_puts_recursion(s + 1);/*recursive call*/
}
