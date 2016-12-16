#include <stdio.h>


int main (void)
{
    int i = 10, count;
    int *int_pointer;

    int_pointer = &i;
    count = *int_pointer;

    printf( "count = %i and i = %i\n", count, i );

    return 0;
}