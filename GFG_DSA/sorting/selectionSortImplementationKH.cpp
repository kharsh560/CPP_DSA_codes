#include <iostream>
using namespace std;

void swapFxn(int *a, int *b)
{
    // Swapping variables in C++ can't take place using "Call by Value" else its
    // done using the "Call by Reference" concept!
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int arr[] = {10, 5, 8, 20, 2, 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    // cout<<size;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int k = 0; k < (size - 1); k++)
    {
        // Here, "i" is the Pivot
        int i = k;
        // Here, "j" is the arrow
        for (int j = (k + 1); j < size; j++)
        {
            if (arr[j] < arr[i])
                i = j;
        }
        swapFxn((arr + i), (arr + k));
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Yes, "swapFxn" is working!!
    // int a = 5, b = 6;
    // cout << a << ", " << b;
    // cout << endl;
    // swapFxn(&a, &b);
    // cout << a << ", " << b;
}