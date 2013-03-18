/** thisoldman2.c
*
*   CS50, pset2
*   Matt Decuir
*
*   Sings "this old man" by calling only two functions for each verse
*
**/

#include <stdio.h>
#include <cs50.h>
#include <string.h>

void chorus(void);
void getverse(int a);

string s1;
string s2;

int main(void)
{
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        // get text for verse
        getverse(i);
        
        // sing verse
        printf("This old man, he played %s\n", s1);
        printf("He played knick-knack %s\n", s2);
        chorus();
    }
    
    return 0;
}

void getverse(int a)
{
    switch (a) 
        {
            case 0: 
                s1 = "one";
                s2 = "on my thumb";
                break;                
            case 1:
                s1 = "two";
                s2 = "on my shoe";
                break;
            case 2:
                s1 = "three";
                s2 = "on my knee";
                break;
            case 3:
                s1 = "four";
                s2 = "on my door";
                break;
            case 4:
                s1 = "five";
                s2 = "on my hive";
                break;
            case 5:
                s1 = "six";
                s2 = "on my sticks";
                break;
            case 6:
                s1 = "seven";
                s2 = "up in heaven";
                break;
            case 7:
                s1 = "eight";
                s2 = "on my gate";
                break;
            case 8:
                s1 = "nine";
                s2 = "on my spine";
                break;
            case 9:
                s1 = "ten";
                s2 = "once again";
                break;
        }
}

void chorus(void)
{
    printf("Knick-knack paddywhack, give your dog a bone\n");
    printf("This old man came rolling home\n\n");
}
