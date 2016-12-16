#include <stdio.h>

int main (void)
{
    int number, factorial = 1;

    for (number = 1; number < 11; ++number) {
        factorial = number * factorial;
        printf("%i     %i\n", number, factorial);
    }

    printf("\n");

    return 0;
    
}