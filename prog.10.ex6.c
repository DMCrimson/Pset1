#include <stdio.h>
#include <stdbool.h>


int main (void)
{
    const char str1[] = "the wrong son";
    void removeString( const char string[], int startPosition, int deleteLength );

    printf( "Original string: %s\n", str1 );
    printf ( "New string: ");
    removeString( str1, 4, 6 );
    printf("\n");

    return 0;
}


void removeString( const char string[], int startPosition, int deleteLength )
{
    int i = 0, j = 0;
    int endPosition = startPosition + deleteLength;

    while ( string[i] != '\0')
    {
        if ( i < startPosition )
            printf( "%c", string[i] );
        else if ( i >= endPosition )
            printf( "%c", string[i] );

        ++i;
    }
}


