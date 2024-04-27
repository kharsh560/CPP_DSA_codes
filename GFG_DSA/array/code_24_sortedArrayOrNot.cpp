#include <iostream>
using namespace std;

int sortedOrNot(int arr[], int n)
{
    for (int i = 0; i <= (n - 2); i++)
    {
        if (arr[i + 1] < arr[i])
            return -1;
    }
    return 0;
}

int main()
{
    int arr[] = {8, 13, 15, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    if (sortedOrNot(arr, size) == 0)
        cout << "True";
    else
        cout << "False";
}