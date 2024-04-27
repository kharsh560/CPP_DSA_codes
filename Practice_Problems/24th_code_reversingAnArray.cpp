#include <iostream>
#include <stdio.h>
using namespace std;

int main () {
    // int arr[] = {75, 745, 87, 75, 8987, 87, 745, 23, 11, 65};
    int arr[50], n;
    cout<<"Enter the number of elements you want inside array!"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array one by one:-"<<endl;
    for (int j=0; j<n; j++) {
        cin>>arr[j];
    }
    // int arrSize = sizeof(arr)/sizeof(arr[0]);
    int i;
    // Printing original array
    cout<<"Original Array"<<endl;
    for (int j=0; j<n; j++) {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    // cout<<i<<endl;
    if (n%2==0) {
        for (int i=0; i<=(n-2)/2; i++) {
            arr[i] = arr[i] + arr[(n-(i+1))];
            arr[(n-(i+1))] = arr[i] - arr[(n-(i+1))];
            arr[i] = arr[i] - arr[(n-(i+1))];
        }
    }
    else if (n%2!=0) {
        for (int i=0; i<=(n-3)/2; i++) {
            arr[i] = arr[i] + arr[(n-(i+1))];
            arr[(n-(i+1))] = arr[i] - arr[(n-(i+1))];
            arr[i] = arr[i] - arr[(n-(i+1))];
        }        
    }
    // Printing reversed array
    cout<<"Reversed Array"<<endl;
    for (int j=0; j<n; j++) {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}