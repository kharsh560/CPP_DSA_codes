#include <iostream>
using namespace std;

int binarySearchIterative(int arr[], int n, int key)
{
    int low = 0, high = (n - 1);
    int f = (low + high) / 2;
    while (high - low != 1)
    {
        if (arr[n - 1] == key)
            return (n - 1);
        if (key > arr[f])
            low = f;
        if (key < arr[f])
            high = f;
        if (arr[f] == key)
            return f;
        f = (low + high) / 2;
    }
    if (arr[f] == key)
        return f;
    else
        return -1;
}

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

int main()
{
    int arr[] = {5, 15, 25, 35, 45, 55};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter the key to be found in this array!";
    cin >> key;
    // Iterative
    // if (binarySearchIterative(arr, size, key) != -1)
    // {
    //     cout << "The key is present at the index '" << binarySearchIterative(arr, size, key) << "' of the array." << endl;
    // }
    // else
    // {
    //     cout << "The key is not a part of this array.";
    // }
    // Recursive Solution
    int recursiveBinarySol = binarySearchRecursive(arr, size, key, 0, (size - 1));
    if (recursiveBinarySol != -1)
    {
        cout << "The key is present at the index '" << recursiveBinarySol << "' of the array." << endl;
    }
    else
    {
        cout << "The key is not a part of this array.";
    }
}