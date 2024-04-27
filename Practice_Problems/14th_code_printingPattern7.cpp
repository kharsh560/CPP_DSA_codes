#include <iostream>
#include <stdio.h>
using namespace std;

int main () {
    int i, j, k, l, n;
    cout<<"Enter the number of rows you want in this pattern:- ";
    cin>>n;
    for(i=1; i<=n; i++) {
        k=1;
        int m=i-1;
        // for the spaces;
        for(j=1; j<=(n-i); j++) {
            cout<<" "<<" ";
        }
        // for the numbers from 1 to i
        for(k=1; k<=i; k++) {
            cout<<k<<" ";
        }
        // for the numbers from (i-1) to 1
        for(l=1; l<i; l++) {
            cout<<m<<" ";
            --m;
        }
        cout<<endl;
    }
        //   1 
        // 1 2 1 
    //   1 2 3 2 1 
    // 1 2 3 4 3 2 1 
//   1 2 3 4 5 4 3 2 1 
// 1 2 3 4 5 6 5 4 3 2 1 
}