#include <stdio.h>
#include <stdbool.h>


int main (void)
{
    int index;
    int findString( const char source[], const char query[] );
    const char source[] = "a chatterbox";
    const char query[] = "chatter";

    index = findString( source, query ); 

    if ( index == -1 )
        printf("Couldnt find query string\n");
    else
        printf( "%i\n", index );

    return 0;
}

int findString( const char source[], const char query[] )
{
    int lenString ( const char str[] );
    int i, successStreak = 0, start = 0;
    int queryLength = lenString( query );

    //find if query appears anywhere in source, return start position

    while ( source[start] != '\0' )
    {
        for ( i = 0; i < queryLength ; ++i ) 
        {
            if ( source[start + i] == query[i])
                ++successStreak;
            else
                successStreak = 0;
            
            if ( successStreak == queryLength )
                return start;
            
        }

        ++start;
    }
            
    return -1;
}

int lenString ( const char str[] )
{
    int length = 0;

    while ( str[length] != '\0' )
        ++length;

    return length;
}