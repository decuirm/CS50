/** greedy.c
*
*   CS50, pset1
*   Matt Decuir
*
*   Returns the minimum number of coins required to equal a user-entered number
*
**/

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    printf("O Hai! ");
    
    // get change and validate
    float change = 0;
    while(change <= 0)
    {
        printf("How much change is owed?\n");
        change = GetFloat();
    }
    
    // convert change to integer
    int cents = roundf(change * 100);
    
    // determine minimum number of coins
    int i = 0;
    while(cents > 0)
    {
        if(cents >= 25)
        {
            cents = cents - 25;
            i++;
        }
        else if(cents >= 10)
        {   
            cents = cents - 10;
            i++;
        }
        else if(cents >= 5)
        {
            cents = cents - 5;
            i++;
        }
        else if(cents >=1)
        {
            cents--;
            i++;
        }            
    }
    
    // output number of coins
    printf("%d\n",i);
    
    return 0;
}
