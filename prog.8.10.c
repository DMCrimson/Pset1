#include <stdio.h>

int minimum (int values[], int numberOfElements)
{
    int minValue, i;
    
    minValue = values[0];

    for ( i = 1; i < numberOfElements; ++i )
        if ( values[i] < minValue )
            minValue = values[i];

    return minValue;
}


int main (void) 
{
    int array1[5] = { 157, -12, -15, 4, 87 };
    int array2[7] = { 10, 12, 14, 16, 17, 18, 5 };
    int minimum ( int values[], int numberOfElements );

    printf( "Array 1 minimum is %i\n", minimum( array1, 5) );
    printf( "Array 2 minimum is %i\n", minimum( array2, 7) );
    
    return 0;
}