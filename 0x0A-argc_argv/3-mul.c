#include <stdio.h>
#include <stdlib.h>

/*
*Authour: Chillexy Steven      
*Program: WinMingle Community C Training
*Description: this program multiplies two numbers
*/

int main(int argc, char *argv[]){

    int i, mul;

    mul = 1;

    if(argc < 3){
        printf("Error\n");
        return 1;
    }

    else if(argc >3){
        printf("input is above expected requirement, E.G: 10, 20");
        return 1;
    }


    for(i = 1; i < argc; i++){

        mul *= atoi(argv[i]);
    }
    printf("%d\n", mul);


    return 0;
}
