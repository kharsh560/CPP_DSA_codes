#include <iostream>
using namespace std;

int main()
{
    // 12, 14, 16, 36, 76, 99
    int arr1[] = {10, 20, 50};
    int sizeArr1 = sizeof(arr1) / sizeof(arr1[0]);

    // 3, 8, 13, 15, 46, 56, 69, 78, 98
    int arr2[] = {5, 50, 50};
    int sizeArr2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[(sizeArr1 + sizeArr2)];

    int m = 0, n = 0;

    // printing arr1
    for (int i = 0; i < sizeArr1; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // printing arr2
    for (int i = 0; i < sizeArr2; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    // Merging the sorted array

    for (int k = 0; k < (sizeArr1 + sizeArr2); k++)
    {
        if (m <= (sizeArr1 - 1))
        {
            if (arr1[m] <= arr2[n])
            {
                cout << "1" << endl;
                arr3[k] = arr1[m];
                m++;
                continue;
            }
        }
        else
        {
            cout << "2" << endl;
            arr3[k] = arr2[n];
            n++;
            continue;
        }
        // cout << "reached" << endl;
        if (n <= (sizeArr2 - 1))
        {
            if (arr2[n] <= arr1[m])
            {
                cout << "3" << endl;
                arr3[k] = arr2[n];
                n++;
                continue;
            }
        }
        else
        {
            cout << "4" << endl;
            arr3[k] = arr1[m];
            m++;
            continue;
        }
    }

    // else if (arr2[n] <= arr1[m] && n <= (sizeArr2 - 1))
    // {
    //     arr3[k] = arr2[n];
    //     n++;
    // }

    // else
    // {
    //     arr3[k] = arr2[n];
    //     // n++;
    //     if ((n + 1) < (sizeArr2))
    //     {
    //         n++;
    //     }
    // }

    // printing arr2
    for (int i = 0; i < (sizeArr1 + sizeArr2); i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl
         << m << " " << n;
}