#include <stdio.h>

int main (void)
{
    int number, digit;

    printf("please give me a number: \n");
    scanf("%i", &number);

    while (number != 0) {
        digit = number % 10;
        printf("%i", digit);
        number = number / 10;
    }

    printf("\n");

    return 0;
}