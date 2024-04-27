#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int i, j, k, l, n;
    cout<<"Enter the number of rows you want in this pattern:- ";
    cin>>n;
    for(i=1; i<=n; i++) {
        for(j=1; j<=(n-i+1); j++) {
            cout<<j<<" ";
        }
        for(k=1; k<=((2*i)-2); k++) {
            cout<<"*"<<" ";
        }
        for(l=(n-i+1); l>=1; l--) {
            cout<<l<<" ";
        }
        cout<<endl;
    }
//          1 2 3 4 5 5 4 3 2 1 
//          1 2 3 4 * * 4 3 2 1 
//          1 2 3 * * * * 3 2 1 
//          1 2 * * * * * * 2 1 
//          1 * * * * * * * * 1 
}