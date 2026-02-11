#include <unistd.h>

/* using the write() function to outout a line of statement to the standard error 
 */

int main(void){
    write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n") -1);
    return(1);
}

