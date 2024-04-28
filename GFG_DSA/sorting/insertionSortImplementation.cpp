#include <iostream>
using namespace std;
void swapFxn(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    // int arr[] = {56, 84, 35, 21, 98, 34, 100, 67, 12, 45};
    int arr[] = {10, 20, 30, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j;
    // Printing the array before sorting
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Insertion Sort Code
    for (int k = 1; k <= (size - 1); k++)
    {
        i = k;
        j = k - 1;
        // Using While :- Optimizes the code for best case(already sorted)!  => By Sir:
        // while (j >= 0 && arr[i] < arr[j])
        // {
        //     swapFxn((arr + i), (arr + j)); // Passing the variables' addresses to swapFxn
        //     i--;
        //     j--;
        // }

        if (arr[i] < arr[j]) // For Pre-Check if the i-th element is greater than the last element of sorted array or not!
        {
            cout << "Inside it" << endl;
            for (j = (k - 1); j >= 0; j--)
            {
                if (arr[i] < arr[j])
                {
                    swapFxn((arr + i), (arr + j)); // Passing the variables' addresses to swapFxn
                    i--;
                }
            }
        }
    }
    // Printing the array after sorting
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}