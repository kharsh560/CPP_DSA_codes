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

    cout << "The number " << k << " has " << count << " numbers of sets.";
}