#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    int temp = arr[0], count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != temp)
        {
            arr[count] = arr[i];
            temp = arr[i];
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[] = {10, 20, 20, 30, 30, 30, 30, 30, 40, 42, 44, 52};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The new 'effective' size of this array will be '" << removeDuplicates(arr, size) << "' and the array will be " << endl;
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
}