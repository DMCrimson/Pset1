#include <stdio.h>

int      convertedNumber[64];
long int numberToConvert;
int      base;
int      digit = 0;

void getNumberAndBase (void)
{
    printf( "Number to convert? \n" );
    scanf( "%li", &numberToConvert );

    printf( "Base? \n" );
    scanf( "%i", &base );

    if ( base < 2 || base > 17 ) {
        printf( "Bad base - must be between 2 and 16\n" );
        base = 10;
    }
}

void convertNumber (void)
{
    do {
        convertedNumber[digit] = numberToConvert % base;
        ++digit;
        numberToConvert /= base;
    }
    while ( numberToConvert != 0 );
}

void displayCurrentNumber (void)
{
    const char baseDigits[16] = { 
        '0', '1', '2', '3', '4', '5', '6', '7', 
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'
    };
    int nextDigit;

    printf("Converted Number: ");

    for ( --digit; digit >= 0; --digit ) {
        nextDigit = convertedNumber[digit];
        printf( "%c", baseDigits[nextDigit] );
    }

    printf("\n");
}

int main (void)
{
    void getNumberAndBase(void), convertNumber(void), displayCurrentNumber(void);

    getNumberAndBase();
    convertNumber();
    displayCurrentNumber();

    return 0;
}