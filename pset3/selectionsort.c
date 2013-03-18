/* selectionsort.c
*
*   Matt Decuir
*   CS50, pset3
*
*   Demonstrates use of selection sort; loops through array, choosing the lowest value, then repeating
*
*/

#include <stdio.h>

#define SIZE 8
int numbers[SIZE];

void sort(int array[], int size)
{    
    // loop through numbers, sorting from lowest to highest
    for (int i = 0; i < size; i++)
    {
        int min = i;
        // loop through remaining numbers, looking for something lower
        for (int j = i+1; j < size; j++)
        {
            if (array[j] < array[min])
                min = j;
        }
        // swap
        if (min != i)
        {
            int t = array[i];
            array[i] = array[min];
            array[min] = t;
        }
        
        numbers[i] = array[i];
    }
}

int main(void)
{
    int numbers[SIZE] = { 4, 15, 16, 50, 8, 23, 42, 108 };
    for (int i = 0; i < SIZE; i++)
        printf("%d ", numbers[i]);
    printf("\n");
    sort(numbers, SIZE);
    for (int i = 0; i < SIZE; i++)
        printf("%d ", numbers[i]);
    printf("\n");
    return 0;
}
