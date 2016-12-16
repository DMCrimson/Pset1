#include <stdio.h>

void calculateTriangleNumber (int n) {
    int i, triangleNumber = 0;

    for ( i = 0; i <= n; ++i )
        triangleNumber += i;

    printf("Triangle Number %i is %i\n", n, triangleNumber);
}

int main (void) {
    calculateTriangleNumber(10);
    calculateTriangleNumber(20);
    calculateTriangleNumber(50);

    return 0;
}