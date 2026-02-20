#include <stdio.h>

/*
*Authour: Chillexy Steven                                                            *Program: WinMingle Community C Training
*Description: all possible combinations of two two digis each 
*/

int main(void)
{
/*    int base = 10;*/

    int first = 0;
    int second;

    while(first <= 98)
    {
        second= first + 1;
        while(second <= 99)
        {
            printf("%02d %02d", first,second);
            if(!(first == 98 && second == 99))
            {
                printf(", "); 
            }

            second++;
        }

        first++;
    }




    putchar('\n');
    return (0);
}
