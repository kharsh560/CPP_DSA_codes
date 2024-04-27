// #include <stdio.h>

// int findMax(int arr[], int n) {
//     int max = arr[0];
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }
//     return max;
// } 

// int main() {
//     int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     printf("Original Array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     int max = findMax(arr, n);

    
//     for (int exp = 1; max / exp > 0; exp *= 10) {
//         int output[n];
//         int count[10] = {0};

//         for (int i = 0; i < n; i++) {
//             count[(arr[i] / exp) % 10]++;
//         }

//         for (int i = 1; i < 10; i++) {
//             count[i] += count[i - 1];
//         }

//         for (int i = n - 1; i >= 0; i--) {
//             output[count[(arr[i] / exp) % 10] - 1] = arr[i];
//             count[(arr[i] / exp) % 10]--;
//         }
//         for (int i = 0; i < n; i++) {
//             arr[i] = output[i];
//         }
//     }

//     printf("Sorted Array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }


#include<stdio.h>
 
// to get the element with maximum value
int getMax(int nums[], int n) {
    int max = nums[0];
    int i;
    for (i = 1; i < n; i++)
        if (nums[i] > max)
            max = nums[i];
    return max;
}
// Count Sort algorithm
void CountSort(int nums[], int n, int exp) {
    // to store a sorted array
    int output[n];
    
    // to keep count of values
    int i, cnt[10] = { 0 };
 
    // count number of values
    for (i = 0; i < n; i++)
        cnt[(nums[i] / exp) % 10]++;
 
    // count index for each
    for (i = 1; i < 10; i++)
        cnt[i] += cnt[i - 1];
 
    // place the elements at a particular index to sort the array
    for (i = n - 1; i >= 0; i--) {
        output[cnt[(nums[i] / exp) % 10] - 1] = nums[i];
        cnt[(nums[i] / exp) % 10]--; 
    }
 
    // copy output in nums
    for (i = 0; i < n; i++)
        nums[i] = output[i];
}

// RadixSort algorithm
void RadixSort(int nums[], int n) {
    int m = getMax(nums, n);

    // call CountSort algorithm for each digit 
    for (int exp = 1; m / exp > 0; exp *= 10)
        CountSort(nums, n, exp);
}
 
// print the array
void print(int nums[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", nums[i]);
}
 
// main function
int main() {
//     user input for the array
    printf("Enter number of elements: ");
    int N= 0;
    scanf("%d", &N);
    int nums[N];
    printf("Enter elements: \n");
    for(int i=0; i<N; i++){
        scanf("%d", &nums[i]);
    }
    printf("the unsorted array is: ");
    for (int j=0; j < N; j++) {
        printf("%d ", nums[j]);
    }
    printf("\n");
    // calling RadixSort 
    RadixSort(nums, N);
    
    // printing sorted array
    printf("The sorted Array is: ");
    print(nums, N);
    return 0;
}
