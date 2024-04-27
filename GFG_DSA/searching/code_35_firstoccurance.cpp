#include <iostream>
using namespace std;

int binarySearchRecursive(int arr[], int n, int key, int low, int high)
{
    int f = (low + high) / 2;
    if (arr[f] == key && arr[f - 1] != key)
        return f;
    if (arr[f] == key && arr[f - 1] == key)
        return binarySearchRecursive(arr, n, key, low, (f - 1));
    if (low > high)
        return -1;
    if (key > arr[f])
        return binarySearchRecursive(arr, n, key, (f + 1), high);
    if (key < arr[f])
        return binarySearchRecursive(arr, n, key, low, (f - 1));
}

int main()
{
    int arr[] = {5, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter the key to be found in this array!";
    cin >> key;
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