#include "main.h"

/*
*Authour: Chillexy Steven                                                           *Program: WinMingle Community C Training
*Description: checking if an input is a lower case or not
*/


int _islower(int c)
{
    if(c >= 'a' && c<= 'z')
    {
        return 1;
    }
    else
        return 0;
}
