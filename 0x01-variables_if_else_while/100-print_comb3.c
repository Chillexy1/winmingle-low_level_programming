#include <stdio.h>

/*
*Authour: Chillexy Steven                                                            *Program: WinMingle Community C Training
*Description: this program prints out the combination of any 2 digits number
*/

int main(void)
{
    int base = 10;
    int first;
    int second;

    first = 0;

    while(first < base){
        second = 0;
        while(second < base){
            if(first == second){
                second++;
                continue;
            }
            putchar(first+'0');
            putchar(second+'0');
            putchar(',');
            putchar(' ');
            
            
            second++;
        }
        first++;
    }
    putchar('\n');
    return 0;
}
