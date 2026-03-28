#include "main.h"
#include <stdlib.h>

/*
*Authour: Chillexy Steven     
*Program: WinMingle Community C Training
*Description:function that frees the previous 2d grid     
*/

void free_grid(int **grid, int height){
    int i;
    if(grid == NULL)
        return;

    for(i = 0; i < height; i++){
        free(grid[i]);

    }
    free(grid);



}
