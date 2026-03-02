#include "main.h"
#include <stdio.h>

int main(void){   
    int month = 2,day = 29,year = 2000;
    
    printf("Date: %02d/%02d/%04d\n",month,day,year);

    int days_of_month = convert_days(month, day, year);

    print_remaining_days(month, days_of_month, year );



    return(0);
}


