#include <stdio.h>


int main (void)
{
    int ratingCounter[11], i, response;

    for (i = 1; i <= 10; ++i) {
        ratingCounter[i] = 0;
    }

    printf("Enter your responses: ");

    for (i = 1; i <= 20; ++i) {
        scanf("%i\n", &response);

        if (response < 1 || response > 10)
            printf("Bad response: %i\n", response);
        else
            ++ratingCounter[response];
    }


    printf("Rating      Number of Responses\n");

    for (i = 1; i <= 20; ++i) {
        printf("%4i       %4i\n", i, ratingCounter[i]);
    }

    return 0;

}