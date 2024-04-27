#include <iostream>
using namespace std;

int largestElementinArr(int arr[], int n)
{
    int largest = arr[0];
    int secondlargest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        if (arr[i] > secondlargest && arr[i] < largest)
        {
            secondlargest = arr[i];
        }
    }
    // for (int i = 1; i < n; i++)
    // {
    //     if ((arr[i] > secondlargest) && (arr[i] < largest))
    //     {
    //         secondlargest = arr[i];
    //     }
    // }
    if (largest != secondlargest)
    {
        return secondlargest;
    }
    else
        return -1;
}

int main()
{
    int size;
    int arr[] = {5, 20, 12, 28, 7};
    // cout << sizeof(arr);
    size = sizeof(arr) / sizeof(arr[0]);
    cout << "The 2nd largest element in the array is " << largestElementinArr(arr, size);
}