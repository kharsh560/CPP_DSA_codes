#include <iostream>
#include <stdio.h>
using namespace std;
#include <math.h>

int main () {
    long int n, remainderArray[100], i=0;
    cout<<"Enter a number in decimal system which you want to be converted into binary equivalent:- ";
    cin>>n;

    // finding the binary equivalent of the entered number
    while (n != 0) {
        remainderArray[i] = n % 2;
        n = (n-remainderArray[i])/2;
        ++i;
    }
    cout<<"Binary equivalent of entered number is ";
    for(int j=(i-1); j>=0; j--) {
        cout<<remainderArray[j];
    }
    printf("\n");

    // finding the compliment of theis binary number

    cout<<"Compliment of the binary equivalent of the entered number is ";
    for(int k=(i-1); k>=0; k--) {
        if(remainderArray[k] == 0) {
            remainderArray[k] = remainderArray[k] + 1;
        }
        else {
            remainderArray[k] = remainderArray[k] - 1;
        }
    }
    for(int j=(i-1); j>=0; j--) {
        cout<<remainderArray[j];
    }

    cout<<endl;
    
    // conversion of binary to decimal
    int binaryToDec = 0;

    for(int j=(i-1); j>=0; j--) {
        binaryToDec = binaryToDec + (remainderArray[j] * ((int) pow (2, j)));
        // cout<<binaryToDec<<endl;
    }
    cout<<"The decimal equivalent of that binary compliment is "<<binaryToDec<<endl;
    printf("\n");
}