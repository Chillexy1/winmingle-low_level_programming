#include "main.h"
unsigned int _strspn(char *s, char *accept){
    int j, i = 0;

    while(s[i] != '\0'){
        for(j = 0; accept[i] != '\0'; j++){
            if(s[i] == accept[j])
                break;
        }
        if(accept[j] == '\0')
            break;


        i++;
    }
    return i;


}
