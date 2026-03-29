#include "main.h"
#include <stdlib.h>

/*
*Authour: Chillexy Steven      
*Program: WinMingle Community C Training
*Description:the goal is to build a single string consisting of all arguments seperated by  a newlibe(\n)    .
*/

char *argstostr(int ac, char **av){
    int i,j,k = 0,len = 0;
    char *str;
    

    if(ac == 0 || av == NULL)
        return NULL;

    for(i = 0 ; i < ac; i++){
        for(j = 0; av[i][j] != '\0'; j++)
            len++;
        len++;

    }

    str = malloc(sizeof(char) * (len +1));
    if(str == NULL)
        return NULL;

    for(i = 0; i < ac; i++){
        for(j = 0; av[i][j] != '\0'; j++)
            str[k++] = av[i][j];
        str[k++]= '\n';

    }
    str[k] = '\0';

    return str;

}
