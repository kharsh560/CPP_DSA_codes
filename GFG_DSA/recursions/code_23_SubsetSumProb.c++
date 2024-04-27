// #include <iostream>
// #include <cmath>
// using namespace std;

// int subsetSum(int arr[], int sizeOfArr, int givenSum, int curr[],  int i = 0)
// {

//     if (i == sizeOfArr)
//     {
//         // int sizeofCurr = sizeof(curr) / sizeof(curr[0]);
//         int sumOfCurr = 0;
//         for (int j = 0; j < sizeofCurr; j++)
//         {
//             sumOfCurr = sumOfCurr + curr[j];
//         }
//         if (sumOfCurr == givenSum)
//             return 1;
//         else
//             return 0;
//     }

//     return (subsetSum(arr, sizeOfArr, givenSum, curr, i + 1)) + (subsetSum(arr, sizeOfArr, givenSum, curr + arr[i], i + 1));
// ############################### we can't append the last element of arr in curr by using this " curr + arr[i]"
//     // for (int k = 0; k < sizeOfArr; k++)
//     // {
//     //     cout << arr[k] << endl;
//     // }
//     // cout<<endl;
//     // curr[] = curr[] + arr[1];

// }

// int main()
// {
//     int array[] = {10, 20, 15};
//     int givenSum = 25;
//     int vacantArray[] = {};
//     int size = sizeof(array) / sizeof(array[0]);
//     // cout << "Answer is " << subsetSum(array, size, givenSum, vacantArray);
//     subsetSum(array, size, givenSum, vacantArray);
// }

#include <iostream>
using namespace std;

int subsetSum(int arr[], int sizeOfArr, int givenSum, int curr[], int currSize, int i = 0) // Initially "currSize" is passed as 0
{
    if (i == sizeOfArr)
    {
        int sumOfCurr = 0;
        for (int j = 0; j < currSize; j++)
        {
            sumOfCurr += curr[j];
        }
        if (sumOfCurr == givenSum)
            return 1;
        else
            return 0;
    }

    // Exclude the current element
    int exclude = subsetSum(arr, sizeOfArr, givenSum, curr, currSize, i + 1);

    // Include the current element
    // first copy the elements of "curr" to "include" array
    // then append the current element; i.e. arr[i]!

    int include[currSize + 1];
    for (int j = 0; j < currSize; j++)
    {
        include[j] = curr[j];
    }
    include[currSize] = arr[i];

    int includeCount = subsetSum(arr, sizeOfArr, givenSum, include, currSize + 1, i + 1);

    return exclude + includeCount;
}

int main()
{
    int array[] = {10, 20, 15, 5};
    int givenSum = 25;
    int vacantArray[] = {};
    int size = sizeof(array) / sizeof(array[0]);

    int count = subsetSum(array, size, givenSum, vacantArray, 0);

    std::cout << "Count of subsets with sum " << givenSum << ": " << count << std::endl;

    return 0;
}
