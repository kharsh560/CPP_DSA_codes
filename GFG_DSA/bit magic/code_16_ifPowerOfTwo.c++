#include <iostream>
using namespace std;

int main()
{
    int n, k, count = 0;
    cout << "Enter the value of n";
    printf("\n");
    cin >> n;
    // cout << "Enter the value of k";
    // cin >> k;
    k = n;

    while (n > 0)
    {
        n = n & (n - 1);
        count++;
    }
    if (count > 1)
    {
        cout << "The number " << k << " is not a power of 2";
    }
    else
    {
        cout << "The number " << k << " is a power of 2";
    }
}