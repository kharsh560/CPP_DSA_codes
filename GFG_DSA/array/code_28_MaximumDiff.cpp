#include <iostream>
using namespace std;

void maxDiff(int arr[], int n)
{
    int i = 0, j = (n - 1);
    int temp_maxDiff = (arr[j] - arr[i]);
    for (i = 0; i < j; i++)
    {
        for (j = (n - 1); j > i; j--)
        {
            if ((arr[j] - arr[i]) > temp_maxDiff)
            {
                temp_maxDiff = (arr[j] - arr[i]);
            }
        }
        j = (n - 1);
    }
    cout << temp_maxDiff;
}

int main()
{
    int arr[] = {30, 10, 8, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The maximum difference of the elements in the array is " << endl;
    maxDiff(arr, size);
}