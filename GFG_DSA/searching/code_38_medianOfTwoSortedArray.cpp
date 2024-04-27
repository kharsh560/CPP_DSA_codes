#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[] = {5, 15, 25, 35, 45, 56};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[(n1) + (n2)];

    cout << "n1 = " << n1 << " n2 = " << n2 << endl;

    int i = 0, j = 0;

    if ((n1 + n2) % 2 == 0)
    {
        cout << "n1+n2 is even" << endl;
        for (int k = 0; k <= ((n1 + n2) / 2); k++)
        {
            if (arr1[i] < arr2[j] && i < n1)
            {
                arr3[k] = arr1[i];
                i++;
            }
            else
            {
                arr3[k] = arr2[j];
                j++;
            }
        }
        // int n3 = sizeof(arr3) / sizeof(arr3[0]);
        cout << "the median of the combined array is " << ((arr3[((n1 + n2 - 1) / 2)] + arr3[((n1 + n2 - 1) / 2) + 1]) / 2);
        // cout << "j = " << j << endl;
        // for (int l = 0; l <= ((n1 + n2) / 2); l++)
        // {
        //     cout << arr3[l] << " ";
        // }
    }
    else
    {
        cout << "n1+n2 is odd" << endl;
        for (int k = 0; k <= ((n1 + n2) / 2); k++)
        {
            if (arr1[i] < arr2[j] && i < n1)
            {
                arr3[k] = arr1[i];
                i++;
            }
            else
            {
                arr3[k] = arr2[j];
                j++;
            }
        }
        // int n3 = sizeof(arr3) / sizeof(arr3[0]);
        // cout << "n3 = " << n3 << endl;
        cout << "the median of the combined array is " << arr3[(n1 + n2) / 2];
    }
}