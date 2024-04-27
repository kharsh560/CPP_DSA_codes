#include <iostream>
using namespace std;

int sumOfNaturalNum(int n)
{
    if (n == 1)
        return 1;
    return n + sumOfNaturalNum(n - 1);
}

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    cout << "Sum of first " << n << " natural numbers is " << sumOfNaturalNum(n) << endl;
}