#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[0])
// Get non-negative command line argument from user
{
    if (argc != 2)
    {
        printf("Try Again!!\n");
        return 1;
    }     
// Make loop to insure that keyword is alpha only
    for (int i = 0, n = strlen ((string) argv[1]); i < n; i++)
    {
        if (!isalpha (argv[1][i]))
        {
            printf("Retry\n")
            return 1 
        }
    }        
}
