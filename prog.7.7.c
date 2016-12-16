#include <stdio.h>

int main (void) {

    const char baseDigits[16] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'A', 'B', 'C', 'D', 'E', 'F'};
    int convertedNumber[64];
    int numberToConvert;
    int nextDigit, base, index = 0;

    printf("What number to convert?: ");
    scanf("%i", &numberToConvert);
    printf("What is the new base?: ");
    scanf("%i", &base);

    //convert to indicated base
    do {
        convertedNumber[index] = numberToConvert % base;
        ++index;
        numberToConvert = numberToConvert / base;
    } 
    while (numberToConvert != 0);

    printf("Converted Number: ");

    //Display results in reverse order
    for (--index; index >= 0; --index)
        nextDigit = convertedNumber[index];
        printf("%c", baseDigits[nextDigit]);

    printf("\n");

    return 0;
}