#include <stdio.h>
int main()
{
    int arr[] = {23, 56, 67, 12, 63, 100, 14, 6};
    int i, len, j, temp;
    len = sizeof(arr) / sizeof(arr[0]);
    // printing the unsorted array!
    printf("Unsorted Array: ");
    for (int k = 0; k < len; k++)
    {
        printf("%d ", arr[k]);
    }
    printf("\n");
    // code for bubble sorting
    for (i=0; i<(len-1); i++ ) {
        for (j=0; j<(len-1-i); j++) {
            if (arr[j]>arr[j+1]) {
                // Code for swapping!
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    // printing the sorted array
    printf("Sorted Array: ");
    for (int k = 0; k < len; k++)
    {
        printf("%d ", arr[k]);
    }
    printf("\n");
    return 0;
}

