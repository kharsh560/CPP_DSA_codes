#include <iostream>
#include <stdio.h>
using namespace std;

void pattern1maker() {
    int i, j, k, n;
    cout<<"Enter the number of rows you want in this pattern:- ";
    cin>>n;
    for(i=1; i<=n; i++) {
        for(j=1; j<=(n-i); j++) {
            cout<<" ";
        }
        for(k=1; k<=i; k++) {
            cout<<"*";
        }
        cout<<endl;
    }
//    *
//   **
//  ***
// ****
}

void pattern2maker() {
    int i, j, k, n;    //No need for this "k" variable anymore!!
    cout<<"Enter the number of rows you want in this pattern:- ";
    cin>>n;
    for(i=1; i<=n; i++) {
        for(j=1; j<=(n-i+1); j++) {
            cout<<"*";
        }
        // for(k=1; k<=(i-1); k++) {
        //     cout<<" ";
        // } Ofcourse, this is not needed in here
        cout<<endl;
    }
    // ****
    // *** 
    // **  
    // *  
}

void pattern3maker() {
    int i, j, k, n;    
    cout<<"Enter the number of rows you want in this pattern:- ";
    cin>>n;
    for(i=1; i<=n; i++) {
        for(k=1; k<=(i-1); k++) {
            cout<<" ";
        }
        for(j=1; j<=(n-i+1); j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    //****
    // ***
    //  **
    //   *
}

void pattern4maker() {
    int i, j, k, n, p=1;
    cout<<"Enter the number of rows you want in this pattern:- ";
    cin>>n;
    for(i=1; i<=n; i++) {
        for(j=1; j<=(n-i); j++) {
            cout<<" ";
        }
        for(k=1; k<=i; k++) {
            cout<<p;
        }
        p++;
        cout<<endl;
    }
}
int main () {
    pattern4maker();
}