#include <stdio.h>
int main()
{
    int arr[] = {23, 56, 67, 12, 63, 100, 14, 6};
    // int arr[] = {7, 2, 91, 77, 3};
    int i, len, j, temp;
    len = sizeof(arr) / sizeof(arr[0]);
    // printing the unsorted array!
    printf("Unsorted Array: ");
    for (int k = 0; k < len; k++)
    {
        printf("%d ", arr[k]);
    }
    printf("\n");

    // code for insertion sort

    for (i = 1; i < len; i++)
    {
        for (j = i; j >= 1; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                // swap!!
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            else
            {
                break;
            }
        }
        // // printing array after each inner iteration!
        // printf("After Iteration %d: ", i);
        // for (int k = 0; k < len; k++)
        // {
        //     printf("%d ", arr[k]);
        // }
        // printf("\n");
    }

    // printing the sorted array
    printf("Sorted Array: \t");
    for (int k = 0; k < len; k++)
    {
        printf("%d ", arr[k]);
    }
    printf("\n");
    return 0;
}