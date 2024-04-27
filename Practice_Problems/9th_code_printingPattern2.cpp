#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    int i, j, n;
    cout<<"Enter the number of rows and column, which are same by the way as per the requirement of pattern!"<<endl;
    cin>>n;
    cout<<"Here is the required pattern:-"<<endl;
    for (i = 1; i <= n; i++)
    {
        int p=1;
        j=1;
        /* code */
        cout<<"Row "<<i<<"=> ";
        while (j<=n)
        {
            /* code */
            cout<<p;
            p++;
            j++;
        }
        printf("\n");

    }
    
    return 0;
}