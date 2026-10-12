#include "main.h"
/*
*Author: Chillexy Steven       
*Program: WinMingle Community C Training
*Description: this a function that prints a long long data type number using a custom _putchar
*/
void print_long(long n)
{
	if (n < 0) /*handles negative integers*/
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		print_long(n / 10);/*get each last digit*/
	}
	_putchar((n % 10) + '0');/*get the first digit and convert to int using _putchar*/
}
