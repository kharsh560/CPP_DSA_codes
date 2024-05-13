#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1, 3, 4, 5, 5, 5};
    int sizeArr1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {0, 1, 1, 1, 3, 5, 7};
    int sizeArr2 = sizeof(arr2) / sizeof(arr2[0]);

    int i = 0, j = 0;
    // int arr3[(sizeArr1 + sizeArr2)];

    // for (i = 0; i < sizeArr1; i++)
    // {
    //     if (i > 0 && arr1[i] == arr1[i - 1])
    //         continue;
    //     if (arr1[i] )
    // }

    while (i < sizeArr1 && j < sizeArr2)
    {
        if (i > 0 && (arr1[i] == arr1[i - 1]))
        {
            i++;
            continue;
        }
        // if (i > 0 && (arr2[j] == arr2[j - 1]))
        // {
        //     j++;
        //     continue;
        // }
        // Without this also we can solve this.
        if (arr1[i] < arr2[j])
        {
            i++;
            continue;
        }
        if (arr1[i] > arr2[j])
        {
            j++;
            continue;
        }
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }
}