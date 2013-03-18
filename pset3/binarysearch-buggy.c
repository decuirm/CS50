/*  binarysearch.c
*
*   Matt Decuir
*   CS50, pset3
*
*   Demonstrates use of binary search
*
*/

#include <cs50.h>
#include <stdio.h>
#include <math.h>

#define SIZE 8
//int i = 0;

bool search(int needle, int haystack[], int min, int max)
{
    // TODO: return true iff needle is in haystack, using binary search
    
    //printf("iteration %d; ",i);
    //i++;
    
    if (max < min)
    {    
        //printf("result: false\n");
        return false;
    }
    else
    {
        int mid = (int) min + (max-min)/2;
        if (haystack[mid] < needle)
        {    
            //printf("pos= %d; %d<%d; min = %d; max = %d; result: false;\n",mid, haystack[mid], needle, min, max);
            search(needle, haystack, mid + 1, max); // if needle > haystack[mid], max needs to = previous max
        }
        else if (haystack[mid] > needle)
        {
            //printf("pos= %d; %d>%d; min = %d; max = %d; result: false;\n",mid, haystack[mid], needle, min, max);
            search(needle, haystack, min, mid -1);
        }    
        else
        {    
            //printf("result: true; =\n");
            return true;
        }
    }
}

int main(void)
{
    int numbers[SIZE] = { 4, 8, 15, 16, 23, 42, 50, 108 };
    printf("> ");
    int n = GetInt();
    if (search(n, numbers, 0, SIZE))
        printf("\nYES\n");
    return 0;
}
