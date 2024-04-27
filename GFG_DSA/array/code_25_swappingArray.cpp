#include <iostream>
using namespace std;

int swappingArray(int arr[], int n)
{
    int temp;
    for (int i = 0; i <= (n - 1) / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[(n - (i + 1))];
        arr[(n - (i + 1))] = temp;
    }
}

int main()
{
    int arr[] = {2, 43, 66, 12, 97, 343, 23};
    int size = sizeof(arr) / sizeof(arr[0]);
    swappingArray(arr, size);
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
}