/** camelcase.c
*
*   CS50, pset2
*   Matt Decuir
*
*   Converts a string to camel case
*
**/

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s;
    
    // get string
    do
    {
        printf("Please enter a string:\n");
        s = GetString();
    }
    while (s == NULL);
    
    // display string
    for(int i = 0, n = strlen(s); i < n; i++)
    {
        if((i + 1) % 2)
            printf("%c",toupper(s[i]));
        else
            printf("%c",tolower(s[i]));
    }
    printf("\n");
    
    return 0;  
}
