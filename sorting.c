/**
 * C program to sort elements of array in ascending order
 */

#include <stdio.h>
#define MAX_SIZE 100    // Maximum array size

sorting()
{
    int arr[MAX_SIZE];
    int size;
    int i, j, temp;
    printf("\nSorting a Array of Number\n");
    /* Input size of array */
    printf("\nEnter size of array: ");
    scanf("%d", &size);

    /* Input elements in array */
    printf("\nEnter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++)
    {
        /* 
         * Place currently selected element array[i]
         * to its correct place.
         */
        for(j=i+1; j<size; j++)
        {
            /* 
             * Swap if currently selected array element
             * is not at its correct position.
             */
            if(arr[i] > arr[j])
            {
                temp     = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    /* Print the sorted array */
    printf("\nElements of array in ascending order: ");
    for(i=0; i<size; i++)
    {
        printf("%d\n", arr[i]);
    }

    //return 0;
}

