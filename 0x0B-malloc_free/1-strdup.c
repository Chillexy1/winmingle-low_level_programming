#include "main.h"
#include <stdlib.h>
#include <string.h>

/*
*Authour: Chillexy Steven    
*Program: WinMingle Community C Training
*Description:we're to duplicate a string into a heap memory     
*/

char *_strdup(char *str){
    int i;
    int len = strlen(str);
    char *array;

    if(str == NULL)
        return NULL;

    array = malloc(sizeof(char) * len);
    for(i = 0; i < len; i++){
        array[i] = str[i];
   //     str[i];
    }
    if(str == NULL)
        return NULL;

    return strdup(array);



}
