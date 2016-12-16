#include <stdio.h>


struct date {
    int year;
    int month;
    int day;
};

int main (void)
{
    int differenceInDays ( struct date date1, struct date date2 );
    int answer;

    struct date date1 = { 1910, 1, 1 };
    struct date date2 = { 1910, 1, 13 };

    answer = differenceInDays(date1, date2);

    printf( "The dates are %i days apart\n", answer);

    return 0;
}

// Calculate difference in days based on two given dates

int differenceInDays ( struct date date1, struct date date2 )
{
    int Output ( struct date input_date);
    int difference;

    difference = Output(date2) - Output(date1);

    return difference;
}


// Calculate total days based on date information

int Output ( struct date input_date )
{
    int result;
    int FormF ( int years, int months );
    int FormG ( int months );
    
    int years = input_date.year;
    int months = input_date.month;
    int days = input_date.day;

    result = 1461 * FormF( years, months ) / 4 + 153 * FormG( months ) / 5 + days;

    return result;
}

// Year adjustment

int FormF ( int years, int months )
{
    if ( months <= 2)
        --years;

    printf("years: %i\n", years);

    return years;
}

// Month adjustment

int FormG ( int months )
{
    if ( months <= 2)
        months += 13;
    else
        months += 1;

    printf("months: %i\n", months);

    return months;
}