#include <stdio.h>


int main (void) {

    int i, numFibs;

    printf("How many fib numbers you want?: ");
    scanf("%i", &numFibs);

    if (numFibs <0 || numFibs > 75) {
        printf("Too small or too big\n");
        return 1;
    }

    unsigned long long int Fibonacci[numFibs];

    Fibonacci[0] = 0;
    Fibonacci[1] = 1;

    for ( i = 2; i < numFibs; ++i ) {
        Fibonacci[i] = Fibonacci[i-1] + Fibonacci[i-2];
    }

    for ( i = 0; i < numFibs; ++i ) {
        printf("%llu ", Fibonacci[i]);
    }

    printf("\n");

}