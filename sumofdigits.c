#include <stdio.h>

int main (void)
{
    int number, digit, result = 0;
    
    printf("give me a number: ");
    scanf("%i", &number);

    while (number != 0) {
        digit = number % 10;
        result = result + digit;
        number = number / 10;
    }

    printf("%i\n", result);

    return 0;
}