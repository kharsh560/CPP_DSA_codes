#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

// int findSeecondLargest(int n, vector<int> &arr)
// {
//     //  "n" is the number of elements to be put in the vector.
//     int i, j;
//     int didSwapOccur = 0;
//      Performed Bubble sort:-
//     for (j = 0; j < (arr.size()); j++)
//     {
//         for (i = 0; i <= ((arr.size()) - 2); i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 didSwapOccur = 1;
//                 int temp = arr[i + 1];
//                 arr[i + 1] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }
//     // cout << didSwapOccur << endl;

//     if (didSwapOccur || (arr[arr.size() - 1]) != (arr[arr.size() - 2])) // But what is agar sorted array hee de diye??
//     {
//         for (int k = (arr.size() - 1); k >= 1; k--)
//         {
//             if (arr[k] != arr[k - 1])
//             {
//                 return arr[k - 1];
//             }
//         }
//     }
//     else
//     {
//         return -1;
//     }
//     // return -1;
// }

int findSeecondLargestAnother(int n, vector<int> &arr)
{
    int largest, secondLargest;
    largest = arr[0];
    secondLargest = arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        if (largest != secondLargest)
        {
            if (arr[i] < largest && arr[i] > secondLargest)
                secondLargest = arr[i];
        }
        if (largest == secondLargest)
        {
            if (arr[i] < largest)
                secondLargest = arr[i];
        }
    }
    if (largest == secondLargest)
        return -1;
    else
        return secondLargest;
}

int main()
{
    vector<int> v;
    int x, n;
    cout << "Enter the number of elements you want in the array" << endl;
    cin >> n;
    cout << "Enter " << n << " elements of the array:- " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cout << "here is the second largest element :-" << endl;
    cout << findSeecondLargestAnother(n, v) << endl;
    printVec(v);
}