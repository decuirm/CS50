/** vigenere.c
*   
*   CS50, pset2
*   Matt Decuir
*
*   encrypts a string using vigenere's cipher
*   requires a text key to be entered at execution
*    
**/

#include <stdio.h> // printf
#include <cs50.h> // string, GetString()
#include <string.h> // strlen
#include <ctype.h> // isalpha, isupper

int main(int argc, string argv[])
{
    // validate one key included in command-line
    if (argv[1] == NULL || argc != 2)
    {
        printf("Usage: ./vigenere <key>\n");
        return 1;
    }
    else
    {
        int len = strlen(argv[1]);
        int k [len];
        
        // validate key only includes alpha characters
        for (int i = 0; i < len; i++)
        {
            if (!isalpha(argv[1][i]))
            {
                printf("Usage: ./vigenere <key>\n");
                return 1;
            }
        }
        
        // iterate through key and add char values to array
        for (int i = 0; i < len; i++)
        {
            int m = 65;
            if (islower(argv[1][i]))
                m += 32;
            k[i] = ((char) argv[1][i]) - m;
        }        
        
        // get string
        string s;
        do 
        {
            s = GetString();
        } 
        while (s == NULL);
        
        // encrypt and print characters
        int j = 0;
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            int c = (char) s[i];
            
            if (isalpha(s[i]))
            {
                int m = 65;
                if(islower(s[i]))
                    m += 32;
                c = (((c - m) + k[j]) % 26) + m; // (letter in alphabet + encryption) mod 26, factoring in wrap
                
                // increment j, wrapping if needed
                if (j == len-1)
                    j = 0;
                else
                    j++;
            }
            printf("%c",c);  // print encrypted character
        }
        printf("\n");
        return 0;
    }
}
 
