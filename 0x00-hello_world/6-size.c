#include <stdio.h>
/*
*Author: Chillexy Steven    
*Program: WinMingle Community C Training
*Description: prints the sizes of variuos types we have in c language
*/
int main(void)
{
    printf("size of a char: %zu byte(s)\n", sizeof(char));
    printf("size of an int: %zu byte(s)\n",  sizeof(int));
    printf("Size of a long int: %zu  byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %zu byte(s)\n",sizeof(long long int));
    printf("Size of a float: %zu byte(s)\n", sizeof(float));

    return(0);
}
