
// Incomplete, don't run yet

#include <stdio.h>


int main (void)
{
    int number, reversedNumber, digit;

    printf("give me a number: \n");
    scanf("%i", &number);

    printf("\n");

    while (number != 0) {
        digit = number % 10;
        printf("%i", digit);
        number = number / 10;
    }

    /* Here's where to figure out how to read the number into the reverse for the switch case*/

    while (reversedNumber != 0){
        digit = reversedNumber % 10;

        switch (digit)
        {
            case 0:
                printf("zero");
                break;
            case 1:
                printf("one");
                break;
            case 2:
                printf("two");
                break;
            case 3:
                printf("three");
                break;
            case 4:
                printf("four");
                break;
            case 5:
                printf("five");
                break;
            case 6:
                printf("six");
                break;
            case 7:
                printf("seven");
                break;
            case 8:
                printf("eight");
                break;
            case 9:
                printf("nine");
                break;
            default:
                printf("unknownDigit");
                break;
        }

        printf(" ");

        reversedNumber = reversedNumber / 10;
    }

    printf("\n");

    return 0;
}