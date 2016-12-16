#include <stdio.h>

int main (void)
{
    int number, remainder;

    printf("please enter your number: \n");
    scanf("%i", &number);

    remainder = number % 2;

    if (remainder == 0)
        printf("even\n");
    else
        printf("odd\n");

    return 0;
}