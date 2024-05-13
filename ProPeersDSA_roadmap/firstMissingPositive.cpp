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

int findingMissingLeastPositive(int arr[], int n)
{
    int startIndex = 0, left, right, i;
    while (arr[startIndex] < 0)
    {
        startIndex++;
    }
    left = arr[startIndex] - 1;
    right = arr[startIndex] + 1;
    for (i = startIndex; i < n; i++)
    {
        if (arr[i] < 1)
            continue;
        if (arr[i] == left)
            left--;
        if (arr[i] == right)
            right++;
    }
    if (arr[i] != left && arr[i] != right)
    {
        return left;
    }
}

int main()
{
    // vector<int> v;
    int size, x;
    cout << "Enter the number of elements you want in the array" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " elements of the array:- " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> x;
        arr[i] = x;
    }
    cout << "here is the first positive missing element :- " << findingMissingLeastPositive(arr, size) << endl;
}

// Its a concept of hashing as per many video solutions
