#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    struct Date
    {
        int day, month, year;
    };
    
    struct Date due_date;
    struct Date return_date;
    
    scanf("%d", &return_date.day);
    scanf("%d", &return_date.month);
    scanf("%d", &return_date.year);
    scanf("%d", &due_date.day);
    scanf("%d", &due_date.month);
    scanf("%d", &due_date.year);
    
    #define ANUAL_FINE 10000
    #define MONTHLY_FINE 500
    #define DAILY_FINE 15
    
    int fine;
    if(return_date.year > due_date.year){
        fine = ANUAL_FINE;
    }else if(return_date.month > due_date.month 
            && (return_date.year == due_date.year)){
        fine = MONTHLY_FINE * (return_date.month - due_date.month);
    }else if(return_date.day > due_date.day 
            && (return_date.year == due_date.year) 
            && (return_date.month == due_date.month)){
        fine = DAILY_FINE * (return_date.day - due_date.day);
    }else{
        fine = 0;
    }
    
    printf("%d\n", fine);
    return EXIT_SUCCESS;
}
