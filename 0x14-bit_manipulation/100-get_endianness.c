#include "main.h"

/*
*Author: Chillexy Steven            
*Program: WinMingle Community C Training
*Description: this function checks the endianness
*/
int get_endianness(void)
{
	int n = 1; 
	char *p = (char *)&n; /* inspect address byte by byte */

	if (*p == 1)
		return (1); /* little endian */
	else
		return (0); /* big endian */
}
