#include <iostream>
#include "mergeTwoSortedArray.cpp"
using namespace std;

int main()
{
    int arr1[] = {1, 1, 3, 3, 3};
    int sizeArr1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {1, 1, 1, 1, 3, 5, 7};
    int sizeArr2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[(sizeArr1 + sizeArr2)];

    mergingTwoArrays(arr1, sizeArr1, arr2, sizeArr2, arr3);

    // printing arr3
    for (int i = 0; i < (sizeArr1 + sizeArr2); i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;

    int counter = 1;

    if (arr3[0] == arr3[1])
        cout << arr3[0] << endl;

    for (int i = 1; i <= ((sizeArr1 + sizeArr2) - 2); i++)
    {
        int currElement = arr3[i];
        if ((arr3[i] == arr3[(i + 1)]) && (arr3[i] != arr3[(i - 1)]))
        {
            cout << arr3[i] << endl;
        }
    }
}