#include <stdio.h>

/*
*Authour: Chillexy Steven                                                    
*Program: WinMingle Community C Training
*Description: this  program to print integers of base 10 seperated by comma and space 
*/

int main(void){
    int base=10;
    int n;

    for (n = 0; n < base; n++)
    {
	    if ( n > 0 && n != base )
		    printf(", ");
	    printf("%d", n);;
    }
    printf("\n");
    return 0;

}
