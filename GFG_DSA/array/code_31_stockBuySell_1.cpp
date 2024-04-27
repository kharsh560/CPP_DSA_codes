#include <iostream>
using namespace std;

int stockBuyAndSell(int arr[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            profit = profit + arr[i] - arr[i - 1];
        }
    }
    return profit;
}

int main()
{
    int arr[] = {10, 20, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum profit that can be generated from these stocks is; " << endl;
    cout << stockBuyAndSell(arr, size);
}