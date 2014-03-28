#include <stdio.h>
#include <cs50.h>


int main(void)
{
    //declare variables
    int hashes = 0;
    int spaces = 0;
    int length = 0; 
    int height; 

    //prompt user to input a positive integer between 1 and 23 otherwise reprompt
    printf("Please type an integer from 1 - 23\n");
    height = GetInt();
    if(height ==  0)
    {
        return 0;
    }
    while(height < 1 || height > 23)
    {
        printf("Retry\n");
        height = GetInt();
    }

    //generating the half-pyramid by using a for loop
    for(int i = 0; i < height; i++)
    {
        length = height + 1;
        hashes = i + 1;
        spaces = length - hashes - 1;
        
        for(int k = 1; k <= spaces; k++)
        {
            printf(" ");
        } 
        for(int j = 0; j <= hashes; j++)
        {
            printf("#");
        }  
            printf("\n");
    }  
    return 0;
                                
                    
       
}
