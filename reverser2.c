#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    int number, digit;
    bool isNegative = false;

    printf("please give me a number: \n");
    scanf("%i", &number);

    if (number < 0) {
        isNegative = true;
        number = -number;
    }

    while (number != 0) {
        digit = number % 10;
        printf("%i", digit);
        number = number / 10;
    }

    if (isNegative == true) {
        printf("-");
    }

    printf("\n");

    return 0;
}