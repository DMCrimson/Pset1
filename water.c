#include <stdio.h>


int main (void) 
{
    int minutes, bottles;

    printf("Minutes: ");
    scanf("%i", &minutes);

    bottles = minutes * 12;

    printf("Bottles: %i\n", bottles);

    return 0;
}