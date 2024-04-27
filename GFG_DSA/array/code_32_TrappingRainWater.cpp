#include <iostream>
using namespace std;

// int trappingRainWater(int arr[], int n)
// {
//     int units = 0;
//     int minOfEdges = min(arr[0], arr[n - 1]);
//     // int minOfEdges;
//     // if (arr[0] >= arr[n - 1])
//     //     minOfEdges = arr[n - 1];
//     // else
//     //     minOfEdges = arr[0];
//     // cout << minOfEdges;
//     for (int i = 1; i < (n - 1); i++)
//     {
//         if ((minOfEdges - arr[i]) <= 0)
//         {
//             units = units + 0;
//         }
//         else
//         {
//             units = units + (minOfEdges - arr[i]);
//         }
//     }
//     // if (units < 0)
//     //     return 0;
//     return units;
// }

int trappingRainWater(int arr[], int n)
{
    int units = 0;
    for (int i = 1; i < (n - 1); i++)
    {
        int lmax = arr[i];
        for (int j = (i - 1); j >= 0; j--)
        {
            lmax = max(lmax, arr[j]);
        }
        int rmax = arr[i];
        for (int l = (i + 1); l < n; l++)
        {
            rmax = max(rmax, arr[l]);
        }
        units = units + (min(lmax, rmax) - arr[i]);
    }
    return units;
}

int main()
{
    int arr[] = {3, 1, 7, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum inuts of water that can be stored in the given system of bars is; " << endl;
    cout << trappingRainWater(arr, size);
    // trappingRainWater(arr, size);
}