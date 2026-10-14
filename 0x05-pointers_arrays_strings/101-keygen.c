#include "main.h"
/*
*Authour: Chillexy Steven   
*Program: WinMingle Community C Training
*Description: using the random generated password, this function prints out a valid password used in crackme programs.
*/

void print_crackme(void)
{
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	int i = 0;
	int num = 4;
	int size = _strlen(letters);
	while (i < 10)
	{
		_putchar(letters[num %size]);
		num = (num * 3 + 1) % size;
		i++;
	}
	_putchar('\n');

}
