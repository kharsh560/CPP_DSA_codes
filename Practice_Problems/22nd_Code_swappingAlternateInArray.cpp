#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[6] = {1, 2, 3, 4, 5, 6};
    int container;

    // // printing original array
    // for (int j=0; j<5; j++) {
    //     cout<<arr1[j]<<" ";
    // }

    // //  if n is odd
    // for (int i=0; i<=(5-2); i = i + 2) {
    //     container = arr1[i];
    //     arr1[i] = arr1[i+1];
    //     arr1[i+1] = container;
    // }
    // printf("\n");
    // // printing reversed array
    // for (int j=0; j<5; j++) {
    //     cout<<arr1[j]<<" ";
    // }

    printf("\n");
    // printing original array
    for (int j=0; j<6; j++) {
        cout<<arr2[j]<<" ";
    }

    // if n is even
    for (int i=0; i<=(6-1); i = i + 2) {
        // container = arr2[i];
        // arr2[i] = arr2[i+1];
        // arr2[i+1] = container;

        arr2[i] = arr2[i] + arr2[i+1];

        arr2[i+1] = arr2[i] - arr2[i+1];
        arr2[i] = arr2[i] - arr2[i+1];

        // arr2[i] = (arr2[i] - arr2[i+1])/2;
        // arr2[i+1] = (arr2[i] + arr2[i+1])/2;
        // Kitne baar aur galti karo ge ismei?


    }
    printf("\n");

    // printing reversed array
    for (int j=0; j<6; j++) {
        cout<<arr2[j]<<" ";
    }


}