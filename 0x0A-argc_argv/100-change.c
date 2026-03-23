#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
*Authour: Chillexy Steven    
*Program: WinMingle Community C Training
*Description: this program prints the minimum number of coins needed to make a change for an amount of money
*/

int main(int argc, char *argv[]){
    int coins[] = {25, 10, 5, 2, 1};
    
    int i, lenght, amount, j, count = 0;

    if(argc < 2){
        printf("only one index number needed");
        return 1;
    }
    else if(argc > 2){
        printf("only one index number needed");
        return 1;
    }

    for(j = 0;  argv[1][j]; j++){
        if(!(isdigit(argv[1][j]))){
            printf("Erro\n");
            return 1;
        }

    }

    amount = atoi(argv[1]);
    lenght = sizeof(coins)/sizeof(coins[0]);


    for(i = 0; i < lenght;i++){
        count += amount / coins[i];
        amount %= coins[i];

    }
    printf("%d\n", count);

    return 0;
}
