#include <iostream>
#include <stdio.h>
using namespace std;
void printingPattern1() {
    int i, j, k, l, m, n;
    cout << "Enter the number of rows you want in this pattern:- ";
    cin >> m;
    n=m-1;

    for(i=1; i<=n; i++) {
        for(j=1; j<=(n-i+1); j++) {
            cout<<" ";
        }
        if(i!=1) {
            cout<<"*";
        }
        
        for(k=1; k<=((2*(i-1))-1); k++) {
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    for(l=1; l<=((2*m)-1); l++) {
        cout<<"*";
    }
    cout<<endl;

//     *
//    * *
//   *   *
//  *     *
// *********
}

void patternPrinting2() {
    int i, j, k, l, n, m;
    cout << "Enter the number of rows you want in this pattern:- ";
    cin >> m;
    n=m-1;
    for(l=1; l<=((2*m)-1); l++) {
        cout<<"*";
    }
    cout<<endl;

    for(i=1; i<=n; i++) {
        for(j=1; j<=i; j++) {
            cout<<" ";
        }
        cout<<"*";
        for(k=1; k<=(((n*2)-1)-(2*i)); k++) {
            cout<<" ";
        }
        if (i!=n) {
            cout<<"*";
        }
        cout<<endl;
    }
// *************
//  *         *
//   *       *
//    *     *
//     *   *
//      * *
//       *
}


void printingDiamond() {
    int i, j, k, l, n;
    cout << "Enter the number of rows you want in each of the half portions of this pattern:- ";
    cin >> n;

    // for upper half
    for(i=1; i<=n; i++) {
        for(j=1; j<=(n-i+1); j++) {
            cout<<" ";
        }
        if(i!=1) {
            cout<<"*";
        }
        
        for(k=1; k<=((2*(i-1))-1); k++) {
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }

    // for lower half
    for(i=1; i<=n; i++) {
        for(j=1; j<=i; j++) {
            cout<<" ";
        }
        cout<<"*";
        for(k=1; k<=(((n*2)-1)-(2*i)); k++) {
            cout<<" ";
        }
        if (i!=n) {
            cout<<"*";
        }
        cout<<endl;
    }

//      *
//     * *
//    *   *
//   *     *
//  *       *
//  *       *
//   *     *
//    *   *
//     * *
//      *
}


int main() {
    printingDiamond();
}