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
    int len;
    char *array;
    if(str == NULL)
        return NULL;

    len = strlen(str);

    array = malloc(sizeof(char) * (len + 1));
    if (array == NULL)
	    return (NULL);

    for(i = 0; i < len; i++)
    {
	    array[i] = str[i];
    }
    array[i] = '\0';
    return _strdup(array);
}
