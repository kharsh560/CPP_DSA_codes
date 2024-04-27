#include <iostream>
using namespace std;

int missingNumber(int arr[], int size)
{
    int missingNum = 0;
    for (int i = 1; i <= (size + 1); i++)
    {
        missingNum = missingNum ^ i;
    }
    for (int j = 0; j < size; j++)
    {
        missingNum = missingNum ^ arr[j];
    }
    return missingNum;
}

int main()
{
    int arr[] = {1, 5, 3, 2, 4, 6, 8, 7, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size << "\n";
    // cout<<"Enter the value of 'n'";
    // cin>>n;
    cout << "So, the missing number is " << missingNumber(arr, size);
    return 0;
}