#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    if (n / 10 == 0)
        return n;
    return (n % 10) + sumOfDigits(n / 10);
}

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    cout << "Sum of digits is " << sumOfDigits(n) << endl;
}