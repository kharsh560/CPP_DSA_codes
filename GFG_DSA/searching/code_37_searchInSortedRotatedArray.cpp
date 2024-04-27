#include <iostream>
using namespace std;

int binarySearchRecursive(int arr[], int n, int key, int low, int high)
{
    int f = (low + high) / 2;
    if (arr[f] == key)
        return f;
    if (low > high)
        return -1;
    if (key > arr[f])
        return binarySearchRecursive(arr, n, key, (f + 1), high);
    if (key < arr[f])
        return binarySearchRecursive(arr, n, key, low, (f - 1));
}

int searchingInSortedRotatedArray(int arr[], int n, int key, int low, int high)
{
    int mid = (low + high) / 2;
    if (arr[mid] == key)
        return mid;

    // left portion (sorted)
    if (arr[mid] > arr[0])
    {
        if (key > arr[0] && key < arr[mid - 1])
        {
            return binarySearchRecursive(arr, n, key, 0, (mid - 1));
        }
    }

    // Right portion (sorted)
    if (arr[mid] < arr[n - 1])
    {
        if (key > arr[mid + 1] && key < arr[n - 1])
        {
            return binarySearchRecursive(arr, n, key, (mid + 1), (n - 1));
        }
    }

    // Do linear search in the left portion
    for (int i = 0; i <= (mid - 1); i++)
    {
        if (arr[i] == key)
            return i;
    }
    // return -1;

    // Do linear search in the ritht portion
    for (int i = (mid + 1); i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {100, 200, 300, 400, 20, 30, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter the key to be found in this array!";
    cin >> key;
    cout << "the key is present at the position " << searchingInSortedRotatedArray(arr, size, key, 0, (size - 1)) << " of the array.";
}