#include <stdio.h>


float absolute_value(float x)
{
    if (x < 0) {
        x = -x;
    }

    return x;
}

float squareRoot(float x)
{
    const float epsilon = .00001;
    float       guess   = 1.0;

    while (absolute_value( guess * guess - x ) >= epsilon )
        guess = ( x / guess + guess ) / 2.0;

    return guess;
}

int main (void)
{
    printf("square root of 2.0 is %f\n",   squareRoot(2.0));
    printf("square root of 144.0 is %f\n", squareRoot(144.0));
    printf("square root of 17.5 is %f\n",  squareRoot(17.5));

    return 0.0;
}