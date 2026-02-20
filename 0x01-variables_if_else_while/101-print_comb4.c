#include <stdio.h>

/*
*Authour: Chillexy Steven                                                            *Program: WinMingle Community C Training
*Description: this program prints out all possible combination of 3 digits number
*/

int main(void)
{
   /* int base = 10;*/
    int first_digit = 0;
    int second_digit;
    int third_digit;

    while(first_digit <= 7)
    {
        second_digit = first_digit + 1;
        while(second_digit <= 8)
        {
            third_digit = second_digit + 1;
            while(third_digit <= 9)
            {
                putchar(first_digit + '0');
                putchar(second_digit + '0');
                putchar(third_digit + '0');
                if(!(first_digit == 7 && second_digit == 8 && third_digit ==9))
                {

                
                    putchar(',');
                    putchar(' ');
                }

                third_digit++;
            }


            second_digit++;
        }

        first_digit++;
    }
    putchar('\n');
    return(0);
}
