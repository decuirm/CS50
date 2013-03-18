/** percent.c
*   
*   CS50, pset1
*   Matt Decuir
*
*   Calculates the percentage a non-negative numerator makes up of a positive denominator
*
**/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // declare numerator
    float numerator = -1;
    
    // get and validate non-negative numerator
    while (numerator < 0)
    {
        printf("Please enter a non-negative numerator: ");
        numerator = GetFloat();
    }

    // declare denominator
    float denominator = 0;
    
    // get and validate positive denominator 
    while (denominator < 1)
    {
        printf("Please enter a positive denominator: ");
        denominator = GetFloat();
    }    

    // calculate percentage
    float percent = (numerator / denominator) * 100;
    printf("Result: %.2f%%\n", percent);
    return 0;        
}
