#include <stdio.h>

int main(void){
    char c[] = "hello boss chillexy";
    
    int n = 0;
    while(c[n] != '\0'){
        n++;
    }
    printf("total lenght: %d\n", n);


    return 0;
}
