#include <stdio.h>


int absolute_value(float x)
{
    if (x < 0) {
        x = -x;
    }

    return x;
}

int main (void)
{
    float result;

    result = absolute_value(15.5);
    printf("absolute value of 15.5 is %.2f\n", result);

    return 0;
}