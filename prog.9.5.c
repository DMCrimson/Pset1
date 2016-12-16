// Program to update the time by one second

#include <stdio.h>



struct time
{
    int hours;
    int minutes;
    int seconds;
};

int main (void) 
{
    struct time timeUpdate ( struct time now );
    struct time currentTime, nextTime;

    printf( "Enter the current time (hh:mm:ss): " );
    scanf( "%i:%i:%i", &currentTime.hours, &currentTime.minutes, &currentTime.seconds );

    nextTime = timeUpdate ( currentTime );

    printf("Updated time is %.2i:%.2i:%.2i\n", nextTime.hours, nextTime.minutes, nextTime.seconds );

    return 0;
}


// Function to update the time by seconds

struct time timeUpdate ( struct time now )
{
    ++now.seconds;

    if ( now.seconds == 60 ) {     //Update for additional minute
        now.seconds = 0;
        ++now.minutes;
        
        if ( now.minutes == 60 ){  //Update for additional hour
            now.minutes = 0;
            ++now.hours;

            if ( now.hours == 24 ) // Update for rolling over hour at midnight
                now.hours = 0;
        }
    }
        
    return now;
}