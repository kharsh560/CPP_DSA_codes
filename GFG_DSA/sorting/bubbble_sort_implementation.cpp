#include <iostream>
using namespace std;

int main()
{
    int arr[] = {56, 87, 34, 98, 23, 76};
    bool isSwapped;
    // Note; isSwapped functionality is introduced to further optimise the solution!
    // It works wonders if the array is predominantly almost sorted!
    for (int i = 0; i < (6 - 1); i++)
    {
        isSwapped = false;
        for (int j = 0; j < (6 - 1 - i); j++)
        {
            if (arr[j + 1] < arr[j])
                swap(arr[j], arr[j + 1]);
            isSwapped = true;
            // int temp = arr[]
        }
        if (!isSwapped)
            break;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}
