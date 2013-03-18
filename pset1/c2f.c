/** c2f.c
*
*    CS50, pset1
*    Matt Decuir
*
*    Converts a temperature from Celsius to Farenheit
*
**/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // get temp in C
    printf("Please enter a temperature in Celsius: ");
    float c = GetFloat();
    
    // convert C to F
    float f = (c * ( 9.0 / 5.0)) + 32.0 ;
    
    // print temp in F
    printf("Equals %.1f degrees in Farenheit\n", f);
    return 0;
}
