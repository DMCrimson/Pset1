#include <stdio.h>

void printMessage (void) 
{
    printf("This came from a function\n");
}

int main (void) 
{
    printMessage();

    return 0;
}