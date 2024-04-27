#include <iostream>
#include <stdio.h>
using namespace std;

int main () {
    int arr[7] = {75, 745, 87, 75, 8987, 87, 745};
    

    for(int i=0; i<7; i++) {
        int  a=0;
        for(int j=0; j<7; j++) {
            // if(arr[i] == arr[j] && i!=j && i<j) {
            //     arrOfSame[a] = arr[i];
            //     ++a;
            // }
            if(arr[i] != arr[j] && i!=j) {
                a++;
            }
        }
        if (a==6) {
            cout<<arr[i]<<" is the unique number!"<<endl;
            break;
        }
    }

    // for(int k=0; k<3; k++) {
    //     cout<<arrOfSame[k]<<" ";
    // }
    // cout<<endl;
    // for(int k=0; k<4; k++) {
    //     cout<<arrOfUnique[k]<<" ";
    // }

}