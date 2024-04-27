#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n, rem, powerArray[50], i;
    cout << "Enter any integer:- ";
    cin >> n;
    // // Time Limit Exceeded with this solution :=>

    // rem = (n % 2);
    // while (rem == 0)
    // {
    //     n = n / 2;
    //     rem = (n % 2);
    // }

    // if (n == 1 && rem == 1)
    // {
    //     cout << "True";
    //     // return true;
    // }
    // else if (n == 2 && rem == 0)
    // {
    //     // return true;
    //     cout<<"True";
    // }
    // else
    // {
    //     cout << "False";
    //     // return false;
    // }

    // Another method:-

    for (i=0; i<=30; i++) {
        powerArray[i] = (int) pow(2,i);
    }
    for(i = 0; i<=30; i++) {
        if (n == powerArray[i]) {
            goto labelX;
        }
    }
    // cout<<"False";
    // cout<<"True";
    labelX:
    if (i == 31) {
        cout<<"False";
    }
    else {
        cout<<"True";
    }


    
}