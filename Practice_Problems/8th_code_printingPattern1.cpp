#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    cout<<"hello! Here is your pattern;"<<endl;;
    int i, j;
    int k=1;
    // let; i=>for rows and j=>for columns
    for(i=1; i<5; i++) {
        
        for(j=1; j<5; j++) {
            cout<<k;
        }
        cout<<endl;
        k++;
    }
    return 0;
}