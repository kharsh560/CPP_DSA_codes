#include <iostream>
using namespace std;

void frequenciesInSortedArr(int arr[], int n)
{
    int temp = arr[0], count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == temp)
        {
            count++;
        }
        else
        {
            cout << temp << " -> " << count << endl;
            temp = arr[i];
            count = 1;
        }
    }
    cout << temp << " -> " << count << endl; // Needed it as extra bcoz, "else" condition
    // is not met only before exiting the loop!
}

int main()
{
    int arr[] = {40, 50, 50, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The elements in this sorted array are appearing following number of times; " << endl;
    frequenciesInSortedArr(arr, size);
}