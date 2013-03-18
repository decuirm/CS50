/** caesar.c
*   
*   CS50, pset2
*   Matt Decuir
*
*   encrypts a string using a caesar cipher
*   requires an integer key to be entered at execution
*
**/

#include <stdio.h> // printf
#include <stdlib.h> // atoi
#include <cs50.h> // string, GetString()
#include <string.h> // strlen
#include <ctype.h> // isalpha, isupper

int main(int argc, string argv[])
{
    // validate one numeric value included in command-line
    if ((argv[1] == NULL || argc != 2) || (atoi(argv[1]) <= 0)) // check arguments
    {
        printf("Usage: ./caesar <key>\n");
        return 1;
    }
    
    else // proceed
    {
        int k = (atoi(argv[1])) % 26; // convert argument to int, mod 26
        string s;
        
        // get string
        do 
        {
            s = GetString();
        } 
        while (s == NULL);
        
        // encrypt and print characters
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            int c = (char) s[i];
            
            if (isalpha(s[i])) // if character is alpha, encrypt
            {
                int m = 65;
                if(islower(s[i])) // if lower case, add 32
                    m += 32;
                c = (((c - m) + k) % 26) + m; // (letter in alphabet + encryption) mod 26, factoring in wrap
            }
            
            printf("%c", c); // print encrypted character
        }

        printf("\n");
        return 0;
    }
}
 
