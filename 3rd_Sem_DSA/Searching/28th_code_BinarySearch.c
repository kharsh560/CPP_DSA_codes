#include <stdio.h>
#include <stdbool.h>  //for using the "bool" datatype!
int main()
{
    int arr[] = {3,5,8,13,16,20,25,27,28};   //Array must be sorted!
    int n, len, low, mid, high;
    len = sizeof(arr)/sizeof(arr[0]);
    low = 0;
    high = len-1;
    bool found = false;
    printf("Enter the number you want to find in the array!\n");
    scanf("%d", &n);
    while (low<=high) {
        mid = (low + high)/2;
        if (arr[mid] == n) {
            printf("The number %d is at the index %d of this array!\n", n, mid);
            found = true;
            break;
        }
        else if (n > arr[mid]) {
            low = mid + 1;
        }
        else {
            high = mid -1;
        }
    }
    if (!found) {
        printf("The number %d is not in this array!\n", n);
    }
    return 0;
}
