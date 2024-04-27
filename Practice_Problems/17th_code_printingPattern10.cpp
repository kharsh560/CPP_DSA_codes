#include <iostream>
#include <stdio.h>
using namespace std;
void printingTrianglePatternUpright() {
    int i, j, k, n;
    cout << "Enter the number of rows you want in this pattern:- ";
    cin >> n;
    for(i=1; i<=n; i++) {
        for(j=1; j<=(n-i); j++) {
            cout<<" ";
        }
        for(k=1; k<=((2*i)-1); k++) {
            cout<<"*";
        }
        cout<<endl;
    }
//     *
//    ***
//   *****
//  *******
// *********
}
void printingSpecialTriangleUpright() {
    int i, j, k, n;
    cout << "Enter the number of rows you want in this pattern:- ";
    cin >> n;
    for(i=1; i<=n; i++) {
        for(j=1; j<=(n-i); j++) {
            cout<<" ";
        }
        for(k=1; k<=i; k++) {
            cout<<"* ";
        }
        cout<<endl;
    }

//       * 
//      * * 
//     * * * 
//    * * * * 
//   * * * * * 
//  * * * * * * 
// * * * * * * * 
}
void printingTrianglePatternDownPointing() {
    int i, j, k, n;
    cout << "Enter the number of rows you want in this pattern:- ";
    cin >> n;
    for(i=1; i<=n; i++) {
        for(k=1; k<=(i-1); k++) {
            cout<<" ";
        }
        for(j=1; j<=(((n*2)-1)-(2*(i-1))); j++) {
            cout<<"*";
        }
        
        cout<<endl;
    }
// *********
//  *******
//   *****
//    ***
//     *
}
void printingSpecialTriangleDownPointing() {
    int i, j, k, n;
    cout << "Enter the number of rows you want in this pattern:- ";
    cin >> n;
    for(i=1; i<=n; i++) {
        for(k=1; k<=(i-1); k++) {
            cout<<" ";
        }
        for(j=1; j<=(n-i+1); j++) {
            cout<<"* ";
        }
        
        cout<<endl;
    }
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 
}

void printingSpecialSandClock() {
    int i, j, k, n;
    cout << "Enter the number of rows you want in the each half of this pattern:- ";
    cin >> n;
    for(i=1; i<=n; i++) {
        for(k=1; k<=(i-1); k++) {
            cout<<" ";
        }
        for(j=1; j<=(n-i+1); j++) {
            cout<<"* ";
        }
        
        cout<<endl;
    }
    for(i=1; i<=n; i++) {
        for(j=1; j<=(n-i); j++) {
            cout<<" ";
        }
        for(k=1; k<=i; k++) {
            cout<<"* ";
        }
        cout<<endl;
    }
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
}
int main () {
    printingSpecialSandClock();
}