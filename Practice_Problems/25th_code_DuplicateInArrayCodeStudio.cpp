#include <iostream>
#include <stdio.h>
using namespace std;

// void checkingForDuplicate(int arr[], int numberOfElements) {
//     int j=0;
//     // code
//     for (int i = 0; i<numberOfElements; i++) {
//         if (arr[i] == arr[j] && i!=j ) {
//             cout<<arr[i];
//             break;
//         }
//     }
// }

int main()
{
    int arr[50], n, j, i;
    cout << "Enter the number of elements you want inside array!" << endl;
    cin >> n;
    cout << "Enter the elements of the array one by one:-" << endl;
    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
    }
    // int arrSize = sizeof(arr)/sizeof(arr[0]);
    // Printing original array
    cout << "Original Array" << endl;
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
    // checkingForDuplicate(arr , n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                goto label;
            }
        }
    }
    label:
    cout << arr[i] << endl;
    return 0;
}