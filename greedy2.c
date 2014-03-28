#include <stdio.h>
#include <cs50.h>

int main (void)
{
    // Prompt user to input amount for change
    float change = 0.00;
    change = GetFloat();
    
    // Verify that user's input is correct
    while (change < 0.00)
    {
       printf("Retry\n");
       change = GetFloat(); 
    }
    
    // Change dollars to cents
    int cents = 0;
    cents = (int)(change * 100);
   
    // Find how many quarters, keep count
    int quarters = 25;
    int q_coins = 0;
    q_coins = cents / quarters;
    cents = cents % quarters;
    
    // Find how many dimes, keep count
    int dimes = 10;
    int d_coins = 0;
    d_coins = cents / dimes;
    cents = cents % dimes;
    
    // Find how many nickels, keep count
    int nickels = 5;
    int n_coins = 0;
    n_coins = cents / nickels;
    cents = cents % nickels;
    
    // Find how many pennies, keep count
    int p_coins = cents;
    
    // Print count
    printf("%d\n", q_coins + d_coins + n_coins + p_coins);
    
    return 0;
    
}

