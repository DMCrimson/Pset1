#include <stdio.h>
//#include <cs50.h>

int main (void) {
    
    int   change;
    int   coins = 0;
    
    printf("Change: ");
    scanf("%i", &change);
    
    while (change >= 25) {
        change = change - 25;
        ++coins;
    }
    
    while (change >= 10) {
        change = change - 10;
        ++coins;
    }
        
    while (change >= 5) {
        change = change - 5;
        ++coins;
    }
        
    while (change > 0) {
        change = change - 1;
        ++coins;
    }
        
    printf("Coins needed for change: %i\n", coins);
    
    return 0;
    
}