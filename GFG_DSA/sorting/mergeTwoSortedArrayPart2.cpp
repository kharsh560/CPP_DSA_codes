#include <iostream>
using namespace std;

void mergeSortFunction(int arr[], int size, int low, int mid, int high)
{
    int i = low, j = (mid + 1), k = 0;
    int arr2[(size)];

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            arr2[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            arr2[k] = arr[j];
            k++;
            j++;
        }
    }
    // If not this (i <= mid && j <= high) then the case must be either i>mid or j>high
    while (i <= mid && j > high)
    {
        arr2[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high && i > mid)
    {
        arr2[k] = arr[j];
        k++;
        j++;
    }

    for (int p = 0; p < size; p++)
    {
        arr[p] = arr2[p];
    }
}

int main()
{
    int arr[] = {10, 12, 18, 80, 2, 13, 40};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);

    // Activating MergeSortFxn

    mergeSortFunction(arr, sizeArr, 0, 3, 6);

    // printing arr
    for (int i = 0; i < sizeArr; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}