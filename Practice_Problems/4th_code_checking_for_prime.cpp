#include <iostream>
using namespace std;

int main()
{
    int n, a = 2;
    cout<<"Enter below, the number which you want to know is prime or not.\n";
    cin >> n;
    while (a < n)
    {
        if (a < n)
        {
            if (n % a == 0)
            {
                cout << "Number n is not prime\n";
                break;
            }
            else
            {
                a = a + 1;
            }
        }
    }
    if (a==n) {
        cout << "The entered number is prime\n";
    }
    
}