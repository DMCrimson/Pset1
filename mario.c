#include <stdio.h>


int main (void)
{
    int height, width, width_of_spaces;

    printf("Height: ");
    scanf("%i", &height);

    width = height + 1;
    width_of_spaces = height - 1;

    for ( int x = 1; x <= height; ++x ) {
        for ( int y = width_of_spaces; y > 0; --y ) {
            printf(" ");
        }
        
        for ( int z = 1; z <= width - width_of_spaces; ++z) {
            printf("#");
        }

        --width_of_spaces;

        printf("\n");
    }

    return 0;
}