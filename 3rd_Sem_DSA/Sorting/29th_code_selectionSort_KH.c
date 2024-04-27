#include <stdio.h>
int main()
{
    // int arr[] = {23, 56, 67, 12, 63, 100, 14, 6};
    int arr[] = {32, 34, 65, 1, 54, 7, 543, 3, -1, 0, -23};
    int i, j, len, temp, indexOfMin, arrowElementIndex;
    len = sizeof(arr) / sizeof(arr[0]);
    // printing the unsorted array
    printf("Initially, the unsorted array is\n");
    for (int k = 0; k < len; k++)
    {
        printf("%d ", arr[k]);
    }
    printf("\n");
    // code for selection sort:- 
    for (i=0; i<(len-1); i++) {
        arrowElementIndex = i;
        for (j=(i+1); j<len; j++) {
            if (arr[j]<arr[arrowElementIndex]) {
                arrowElementIndex = j;
            }
        }
        // Now swap the arrow element with the line element(arr[i])
        temp = arr[i];
        arr[i] = arr[arrowElementIndex];
        arr[arrowElementIndex] = temp;
    }

    // printing the sorted array!
    for (int k = 0; k < len; k++)
    {
        printf("%d ", arr[k]);
    }
    printf("\n");
    return 0;
}
