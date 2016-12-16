#include <stdio.h>
#include <stdbool.h>


struct date
{
    int month;
    int day;
    int year;
};

int main (void)
{
    struct date today, tommorrow;
    int    numberOfDays( struct date d );

    printf( "Enter today's date mm dd yyyy: " );
    scanf( "%i%i%i", &today.month, &today.day, &today.year );

    if ( today.day != numberOfDays(today) ) {
        tommorrow.day =   today.day + 1;
        tommorrow.month = today.month;
        tommorrow.year =  today.year;
    }
    else if ( today.month == 12 ) { //end of the year
        tommorrow.day = 1;
        tommorrow.month = 1;
        tommorrow.year = today.year + 1;
    }
    else {
        tommorrow.day = 1;
        tommorrow.month = today.month + 1;
        tommorrow.year = today.year;
    }

    printf( "tommorrow is %i/%i/%.2i\n", tommorrow.month, tommorrow.day, tommorrow.year % 100 );

    return 0;
}

//Function to determine number of days in a month

int numberOfDays( struct date d )
{
    int days;
    bool isLeapYear( struct date d );
    const int daysPerMonth[12] = 
        { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if ( isLeapYear (d) == true && d.month == 2 )
        days = 29;
    else   
        days = daysPerMonth[d.month - 1];

    return days;

}

//Function to determine if it's leap year

bool isLeapYear ( struct date d )
{
    bool leapYearFlag;

    if ( (d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0 )
        leapYearFlag = true;
    else
        leapYearFlag = false;

    return leapYearFlag;
}