#include "main.h"
/*
*Author: Chillexy Steven   
*Program: WinMingle Community C Training
*Description: this function capitalizese th first occurence of every word in a string
*/
char *cap_string(char *str)
{
    int i = 0;
    while(str && str[i])
    {
        if(i == 0)/* converts the firsr letter to uppercae if it's a lowercase*/
	{
            if(str[i] >= 'a' && str[i] <= 'z'){
                str[i] = str[i] - 32;
            }
        }
        else if(str[i - 1] == ' ' || str[i - 1] == '\n')/* if the next charcter - 1 is a space then we got thenext word to convert to uppercase*/
	{
            if(str[i] >= 'a' && str[i] <= 'z'){
                str[i] = str[i] -32;
            }
        }

        i++;
    }
    return str;
}
