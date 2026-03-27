#include "main.h"
#include <stdlib.h>

/*
*Authour: Chillexy Steven   
*Program: WinMingle Community C Training
*Description: pthe goal is to allocate a buffer to the heap  and fill it  with a specific char
*/

char *create_array(unsigned int size, char c){
    unsigned int i;
    char *array;
    if(size == 0)
        return NULL;

    array = malloc(sizeof(char) * size);
    if(array == NULL)
        return NULL;

    for(i = 0; i < size; i++){
        array[i] = c;
    }
    return array;


}
