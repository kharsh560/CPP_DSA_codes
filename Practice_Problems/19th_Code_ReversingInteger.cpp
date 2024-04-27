#include <iostream>
#include <stdio.h>
using namespace std;
#include <math.h>

// int checkingNumberOfDigits(int num) {
    // int b, n=1;
    // b=num/10;
    // while (b != 0) {
    //     b=b/10;
    //     n= n+1;
    // }
//     return n;
// }
// int reverseNumberGenerator(int convertedNum) {
//     int revNum=0;
//     revNum = revNum+convertedNum;
//     return revNum;
// }
// void converter(int digits, int power) {
//     int convert;
//     convert = digits * ((int) pow (10, power));
//     reverseNumberGenerator(convert);
// }

// void reciprocatingTheIntegerEntered(int num, int noOfDigits) {
//     int i, storer;
//     for(i=1; i<=noOfDigits; i++) {
//         storer = num % 10;
//         converter(storer, (noOfDigits-(i)));
//         num = num/10;
//     }
// }

// int main() {
//     int a, numOfDigits;
//     cout<<"Enter any integer:-"<<endl;
//     cin>>a;
//     numOfDigits = checkingNumberOfDigits(a);
//     cout<<"The number of digits in the entered integer is "<<numOfDigits<<endl;
//     reciprocatingTheIntegerEntered(a, numOfDigits);
//     cout<<reverseNumberGenerator();
// }


int main () {
    int x, n=1, a, lastDigit, reversedNum = 0, i;
    cout<<"Enter the number which is to be reversed! :-"<<endl;
    cin>>x;

    // Counting the number of digits in the entered number!
    a = x/10;
    while(a != 0) {
        a = a/10;
        n = n+1;
    }
    cout<<"The number of digits in the entered number "<<x<<" is "<<n<<endl;


    // Reversing the number:-
    for(i=1; i<=n; i++) {
        lastDigit = x % 10;
        cout<<lastDigit<<endl;
        // if(reversedNum > ((INT_MAX)-(lastDigit * ((int) pow(10, (n-i))))) || lastDigit > 7) {
        //     cout<<reversedNum;
        //     return 0;
        // }
        // else if (reversedNum < ((INT_MIN)-(lastDigit * ((int) pow(10, (n-i))))) || lastDigit < -8){
        //     cout<<"value out of range";
        //     cout<<reversedNum;
        //     return 0;
        // }
        // else {
        //     reversedNum = reversedNum + (lastDigit * ((int) pow(10, (n-i))));
        //     cout<<reversedNum;
        // }
        // reversedNum = reversedNum + (lastDigit * ((int) pow(10, (n-i))));
        // ||  (lastDigit * ((int) pow(10, (n-i)))) < 0
        if (((lastDigit > (INT_MAX)/((int) pow(10, (n-i)))))) {
            cout<<"Number Is Greater than range!";
            return 0;
        }
        else{
            cout<<((lastDigit * ((int) pow(10, (n-i)))))<<endl;
        }
        // else {
        //     reversedNum = reversedNum + (lastDigit * ((int) pow(10, (n-i))));
        //     cout<<reversedNum<<endl;;
        // }
        x = x/10;
    }
    cout<<"The reversed number is "<<reversedNum<<endl;
    return reversedNum;

    // // cout<<x;
    // if (reversedNum>=-2147483648 || reversedNum<=2147483647) {
    //     if ((reversedNum + x)>=-2147483648 || (reversedNum + x)<=2147483647) {
    //         reversedNum = reversedNum + x;
    //         cout<<reversedNum<<endl;
    //         return reversedNum;
    //     }
    //     else {
    //         cout<<"The reversed signed integer is out of range!";
    //         return 0;
    //     }   
    // }
    // else {
    //     cout<<"The reversed signed integer is out of range!";
    //     return 0;
    // }
    
    
    // if (reversedNum <= 2147483647 || reversedNum >= -2147483647) {
    //     cout<<"So the reversed number is "<<reversedNum<<endl;
    // }
    // else {
    //     cout<<"The reversed signed integer is out of range!";
    // }
    
}