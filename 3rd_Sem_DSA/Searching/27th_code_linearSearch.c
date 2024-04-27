#include <stdio.h>
int main()
{
    int arr[] = {4,5,23,78,26,55,76};
    int n, len, i;
    len = sizeof(arr)/sizeof(arr[0]);
    printf("Enter the number you want to find in the array!\n");
    scanf("%d", &n);
    for(i=0; i<len; i++) {
        if (arr[i]==n) {
            printf("Yes %d is present in the given array!\n", n);
        }
    }
    if(i==len) {
        printf("The number %d is not present in this array!\n", n);
    }
    return 0;
} 
