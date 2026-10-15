#include "main.h"
/*
*Author: Chillexy Steven 
*Program: WinMingle Community C Training
*Description: this function reverses the content of an array of int
*/
void reverse_array(int *a, int n)
{
	int start = 0;
	int temp;
	int len = n -1;
	while (start <= len)
	{
		temp = a[start];
		a[start] = a[len];
		a[len] = temp;
		start++;
		len--;
	}
}
