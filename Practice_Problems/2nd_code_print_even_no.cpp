#include <iostream>
using namespace std;

int main()
{
    int n, a = 1;
    cout<<"Enter the value of n, upto which you want to print even numbers"<<"\n";
    cin >> n;
    cout<<"The even numbers upto n are:-\n";
    while (a <= n)
    {
        if (a % 2 == 0)
        {
            cout << a <<"\n";
        }
        a = a + 1;
    }
}