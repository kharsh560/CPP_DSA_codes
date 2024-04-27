#include <iostream>
using namespace std;

int maxConsecutiveOnes(int arr[], int n)
{
    int count = 0, countMax = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count = count + 1;
        }
        else
        {
            if (count > countMax)
            {
                countMax = count;
            }
            count = 0;
        }
    }
    if (count > countMax)
    {
        return count;
    }
    return countMax;
}

int main()
{
    int arr[] = {0, 0, 0, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum consecutive ones in the given binary array is; " << endl;
    cout << maxConsecutiveOnes(arr, size);
}