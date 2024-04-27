#include <iostream>
using namespace std;
#include <math.h>

int squareRoot(int n)
{
    // return floor(sqrt(n)); // "Direct method, Use of 'sqrt' function of math.h"
    int i = 1;
    while ((i * i) <= n)
    {
        i = i + 1;
    }
    return (i - 1);
}

int squareRootUsingBinarySearch(int n)
{
    int low = 1, high = n, possibleSolun;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (n > (mid * mid))
        {
            possibleSolun = mid;
            low = mid + 1;
        }
        if (n < (mid * mid))
            high = mid - 1;

        if (n == (mid * mid))
            return mid;
    }
    return possibleSolun;
}

int main()
{
    cout << "Enter the number to get the floor of its square root." << endl;
    int n;
    cin >> n;
    cout << "Square root of " << n << " is " << squareRootUsingBinarySearch(n);
}