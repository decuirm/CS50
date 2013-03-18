/** thisoldman1.c
*
*   CS50, pset2
*   Matt Decuir
*
*   Sings "this old man" by calling three functions for each verse
*
**/

#include <stdio.h>
#include <cs50.h>
#include <string.h>

void chorus(void);
void lineone(int a);
void linetwo(int a);

int main(void)
{
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        // sing first line
        printf("This old man, he played ");
        lineone(i);
        printf("\n");
        
        // sing second line
        printf("He played knick-knack ");
        linetwo(i);
        printf("\n");
        
        // sing chorus
        chorus();        
    }   
    return 0;
}

void lineone(int a)
{
    switch (a) 
        {
            case 0: 
                printf("one");
                break;                
            case 1:
                printf("two");
                break;
            case 2:
                printf("three");
                break;
            case 3:
                printf("four");
                break;
            case 4:
                printf("five");
                break;
            case 5:
                printf("six");
                break;
            case 6:
                printf("seven");
                break;
            case 7:
                printf("eight");
                break;
            case 8:
                printf("nine");
                break;
            case 9:
                printf("ten");
                break;
        }
}

void linetwo(int a)
{
    switch (a) 
        {
            case 0: 
                printf("on my thumb");
                break;                
            case 1:
                printf("on my shoe");
                break;
            case 2:
                printf("on my knee");
                break;
            case 3:
                printf("on my door");
                break;
            case 4:
                printf("on my hive");
                break;
            case 5:
                printf("on my sticks");
                break;
            case 6:
                printf("up in heaven");
                break;
            case 7:
                printf("on my gate");
                break;
            case 8:
                printf("on my spine");
                break;
            case 9:
                printf("once again");
                break;
        }
}

void chorus(void)
{
    printf("Knick-knack paddywhack, give your dog a bone\n");
    printf("This old man came rolling home\n\n");
}
