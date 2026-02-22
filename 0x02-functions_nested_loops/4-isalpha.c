#include "main.h"


/*
*Authour: Chillexy Steven                                                           *Program: WinMingle Community C Training
*Description: printing alphabetas in lowercase and uppercase
*/

int _isalpha(int c)
{
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return 1;
    }
    else
        return 0;
}
