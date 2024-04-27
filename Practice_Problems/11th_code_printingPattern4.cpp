#include <iostream>
#include <stdio.h>
using namespace std;

void uprightTriangle() {
    int i, j, n;
    cout<<"Enter the number of rows you want to have for this pattern:-"<<endl;
    cin>>n;
    for (i=1; i<=n; i++) {
        for(j=1; j<=i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}

void uprightTriangleWithNumbers() {
    int i, j, n, k;
    cout<<"Enter the number of rows you want to have for this pattern:-"<<endl;
    cin>>n;
    for (i=1; i<=n; i++) {
        k=i;
        for(j=1; j<=i; j++) {
            cout<<"{"<<k<<"}";
            --k;
        }
        
        cout<<endl;
    }
}

int main() {
    // uprightTriangle();
    uprightTriangleWithNumbers();
    return 0;
}