#include <iostream>
using namespace std;

// int leadersInArray(int arr[], int n)
// {
//     int i, j;
//     for (i = 0; i < n; i++)
//     {
//         for (j = (i + 1); j < n; j++)
//         {
//             if (arr[j] >= arr[i])
//                 break;
//         }
//         if (j == (n))
//             cout << arr[i] << ", ";
//     }
//     // cout << arr[n - 1]; no need!!
// }

int leadersInArray(int arr[], int n)
{
    cout << arr[n - 1] << ", ";
    int temp = arr[n - 1];
    for (int i = (n - 1); i >= 0; i--)
    {
        if (arr[i - 1] > temp)
        {
            cout << arr[i - 1] << ", ";
            temp = arr[i - 1];
        }
    }
}

int main()
{
    int arr[] = {7, 10, 4, 10, 6, 5, 2, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The leaders in the array are " << endl;
    leadersInArray(arr, size);
}