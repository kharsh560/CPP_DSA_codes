#include <iostream>
#include <stdio.h>
using namespace std;

void pattern1maker() {
    char n = 65;
    int i, j, r;
    cout<<"Enter the number of rows you want in this pattern!"<<endl;
    cin>>r;
    // cout<<n;
    for(i=1; i<=r; i++) {
        for(j=1; j<=3; j++) {
            cout<<n<<" ";
        }
        cout<<endl;
        ++n;
    }
}

void pattern2maker() {
    
    int i, j, r;
    cout<<"Enter the number of rows you want in this pattern!"<<endl;
    cin>>r;
    // cout<<n;
    for(i=1; i<=r; i++) {
        char n = 65;
        for(j=1; j<=3; j++) {
            cout<<n<<" ";
            ++n;
        }
        cout<<endl;
        
    }
}

void pattern3maker() {
    int i, j, n, k;
    cout<<"Enter the number of rows you want in this pattern:-"<<endl;
    cin>>n;
    for(i=1; i<=n; i++) {
        k=i;
        for(j=1; j<=3; j++) {
            cout<<k;
            k++;
        }
        cout<<endl;
    }

}

void pattern4maker() {
    int i, j, n;
    char k;
    cout<<"Enter the number of rows you want in this pattern:-"<<endl;
    cin>>n;
    for(i=1; i<=n; i++) {
        k='A' + i - 1;
        for(j=1; j<=3; j++) {
            cout<<k;
            k++;
        }
        cout<<endl;
    }
}

void pattern5maker() {
    int i, n;
    cout<<"Enter the number of rows you want in this pattern:-"<<endl;
    cin>>n;
    char k='A';
    for(i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }

}

void pattern6maker() {
    int i, j, n;
    char k;
    cout<<"Enter the number of rows you want in this pattern:-"<<endl;
    cin>>n;
    for(i=1; i<=n; i++) {
        k='A' + i - 1;
        for(j=1; j<=i; j++) {
            cout<<k;
            k++;
        }
        cout<<endl;
    }
}

int main() {
    // calling required pattern:-
    pattern3maker();
}