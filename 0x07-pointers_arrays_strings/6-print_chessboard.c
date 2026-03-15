#include "main.h"

/*
*Authour: Chillexy Steven                   
*Program: WinMingle Community C Training
*Description: we're printing out a 8x8 chessboard from char board[8][8]
*/

void print_chessboard(char (*a)[8]){
    int i, j;

    for (i = 0; i < 8; i++){
        for(j = 0; j < 8; j++){
            _putchar(a[i][j]);

        }
        _putchar('\n');

    }

}
