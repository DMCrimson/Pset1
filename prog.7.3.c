#include <stdio.h>

int main (void) {
    int Fibonnaci[15], i;

    Fibonnaci[0] = 0;
    Fibonnaci[1] = 1;

    for ( i = 2; i < 15; ++i ) {
        Fibonnaci[i] = Fibonnaci[i - 1] + Fibonnaci[i - 2];
    }

    for ( i = 0; i < 15; ++i ) {
        printf("%i\n", Fibonnaci[i]);
    }

    return 0;
}