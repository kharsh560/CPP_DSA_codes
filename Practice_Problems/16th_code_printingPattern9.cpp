#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int i, j, k, l, n;
    cout << "Enter the number of rows you want in this pattern:- ";
    cin >> n;
    if (n % 2 != 0)
    {
        for (i = 1; i <= ((n + 1) / 2); i++)
        {
            for (j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        // i=((n + 1) / 2) + 1;
        for (k = 1; k <= ((n - 1) / 2); k++) {
            for (l=(((n - 1) / 2)+1-k); l>=1; l--) {
                cout<<"*";
            }
            cout<<endl;
        }
    }
    else {
        cout<<"This pattern can only be printed for odd bumber of rows! Common Sence!";
    }

// *
// **
// ***
// ****
// *****
// ******
// *******
// ********
// *********
// ********
// *******
// ******
// *****
// ****
// ***
// **
// *
}