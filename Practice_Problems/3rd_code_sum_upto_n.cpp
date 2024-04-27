#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, sum = 0, a = 1;
    cout<<"Enter the number upto which you want the sum of:-\n";
    cin >> n;
    cout<<"The sum of numbers upto n are:-\n";

    while (a <= n)
    {
        sum = sum + a;
        if (a <= n)
        {
            a = a + 1;
        }
    }
    cout<<sum<<"\n";
}

