#include <stdio.h>

int main (void)
{
    int number = 0, exponential;

    while (number < 11) {
        exponential = number * number;
        printf("%i     %i\n", number, exponential);
        ++number;
    }

    printf("\n");

    return 0;
    
}