// #include <stdio.h>
// int main()
// {
//     int arr[] = {23, 56, 67, 12, 63, 100, 14, 6};
//     int i, j, len, temp, gap;
//     len = sizeof(arr) / sizeof(arr[0]);
//     gap = len / 2;
//     printf("Initially, the unsorted array is\n");
//     for (int k = 0; k < len; k++)
//     {
//         printf("%d ", arr[k]);
//     }
//     printf("\n");
//     while (gap >= 1)
//     {
//         printf("%d\n", gap);
//         for (i = gap; i < len; i++)
//         {
//             if ((i + gap)<len && arr[i+gap] < arr[i]) {
//                 temp = arr[i];
//                 arr[i] = arr[i+gap];
//                 arr[i+gap] = temp;
//             }
//             if (arr[i-gap] < arr[i] && (i - gap) >= 0) {
//                 temp = arr[i];
//                 arr[i] = arr[i-gap];
//                 arr[i-gap] = temp;
//             }
//         }
//         gap = gap/2;
//     }
//     for (int k = 0; k < len; k++)
//     {
//         printf("%d ", arr[k]);
//     }
//     printf("\n");

//     return 0;
// }

#include <stdio.h>

void shellSort(int arr[], int n)
{
    int gap, i, j, temp;
    for (gap = n / 2; gap > 0; gap /= 2)
    {
        for (i = gap; i < n; i++)
        {
            temp = arr[i];
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
            {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

int main()
{
    int arr[] = {12, 34, 54, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    shellSort(arr, n);

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
