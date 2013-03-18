/** mario.c
*
*   CS50, pset1
*   Matt Decuir
*
*   Recreates the half-pyramid from Mario 1-1, based on user input
*
**/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // ask user for height and validates
    int height = 0;
    while (height < 1 || height > 23)
    {
        printf("Height: ");
        height = GetInt();
    }

    // display pyramid
    for(int i = 1; i <= height; i++)
    {
        // print spaces
        for(int j = (height-i); j > 0; j--)
        {
            printf(" ");
        }
        
        // print hashes
        for(int k = 1; k <= (i+1); k++)
        {
            printf("#");
        }
        
        // print line break
        printf("\n");
    }
    
    return 0;
}
