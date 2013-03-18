/* binarysearch.c
*
*   Matt Decuir
*   CS50, pset3
*
*   Demonstrates use of binary search
*   What I learned:return non-0 = true; return 0 = false
*
*/

#include <cs50.h>
#include <stdio.h>

#define SIZE 8

bool search(int n, int array[], int min, int max)
{
    // return true if n exists in the array
    while (max >= min)
    {    
        int mid = (int) min + (max-min)/2;
        
        if (array[mid] < n)
            min = mid + 1;
        else if (array[mid] > n)
            max = mid - 1;
        else
            return array[mid];
    }
    return 0;
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
