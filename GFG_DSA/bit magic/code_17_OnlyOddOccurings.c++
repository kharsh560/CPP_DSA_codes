#include <iostream>
using namespace std;

int checkingOddOccurence(int arr[], int size)
{
    int count, temp;
    // size = sizeof(arr) / sizeof(arr[0]);
    // cout << "Size of array is " << size << "\n";
    for (int i = 0; i < size; i++)
    {
        temp = arr[i];
        count = 0;
        if (arr[i] != -1)
        {
            for (int j = i; j < size; j++)
            {
                if (arr[j] == temp)
                {
                    count++;
                    arr[j] = -1;
                }
            }
        }
        if (count % 2 == 1)
        {
            // cout << temp << " Occurs " << count << " Number of times.";
            // printf("\n");
            return temp;
        }
    }
}

int main()
{
    int arr[] = {8, 7, 7, 8, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    // cout << size;
    // cout << "Enter the number which is to be checked.";
    cout << "The number occuring odd number of times is " << checkingOddOccurence(arr, size);
    // checkingOddOccurence(arr, size);
}