#include <iostream>
#include <stdio.h>
using namespace std;
#include <math.h>

// ************************************ MY SOLUTION !! THE ORIGINALs ************************************ 

int reverse(int x)
{
    int n = 1, a, lastDigit, reversedNum = 0, i;
    bool isXnegative;
    if (x == -2147483648)
    {
        isXnegative = true;
        x = -(x + 1);
    }
    else if (x < 0)
    {
        isXnegative = true;
        x = -x;
    }
    else
    {
        isXnegative = false;
    }
    a = x / 10;
    while (a != 0)
    {
        a = a / 10;
        n = n + 1;
    }

    for (i = 1; i <= n; i++)
    {
        lastDigit = x % 10;
        if (((lastDigit > (INT_MAX) / ((int)pow(10, (n - i))))))
        {
            // cout<<"Number Is Greater than range!";
            return 0;
        }
        else if (reversedNum > (INT_MAX) - (lastDigit * ((int)pow(10, (n - i)))))
        {
            return 0;
        }
        else
        {
            reversedNum = reversedNum + (lastDigit * ((int)pow(10, (n - i))));
        }
        x = x / 10;
    }
    if (isXnegative)
    {
        return (-1) * (reversedNum);
    }
    else
    {
        return reversedNum;
    }
}

int main()
{
    int numberToBeReversed;
    printf("\n");
    cout<<"Enter the number which is to be reversed!:-";
    cin>>numberToBeReversed;
    printf("\n");
    cout<<reverse(numberToBeReversed)<<endl;

    // int x, n=1, a, lastDigit, reversedNum = 0, i;
    // cout<<"Enter the number which is to be reversed! :-"<<endl;
    // cin>>x;

    // // Counting the number of digits in the entered number!
    // a = x/10;
    // while(a != 0) {
    //     a = a/10;
    //     n = n+1;
    // }
    // cout<<"The number of digits in the entered number "<<x<<" is "<<n<<endl;
    // printf("\n");

    // for(i=1; i<=n; i++) {
    //     lastDigit = x % 10;
    //     cout<<"thedigit at position "<<i<<" from last is "<<lastDigit<<endl;
    //     if (((lastDigit > (INT_MAX)/((int) pow(10, (n-i)))))) {
    //         cout<<"Number Is Greater than range!";
    //         return 0;
    //     }
    //     else {
    //         reversedNum = reversedNum + (lastDigit * ((int) pow(10, (n-i))));
    //     }
    //     x=x/10;
    // }
    // printf("\n");
    // cout<<"Hence the reversed number is "<<reversedNum<<endl;
    // return reversedNum;
}