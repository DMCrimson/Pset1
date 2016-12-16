#include <stdio.h>

int main (void)
{
    char result[20];
    char source[8] = "besides";
    int start = 1, count = 4;
    void substring ( char source[], int start, int count, char result[] );

    printf( "%s is the selected word, %i is the starting point and %i is the selected length \n", source, start, count );

    substring( source, start, count, result );

    printf( "%s\n", result );

    return 0;
}



void substring ( char source[], int start, int count, char result[] )
{
    int end = start + count;
    int i;

    for ( i = 0; start < end; ++i )
    {
        result[i] = source[start];
        ++start;
    }
}