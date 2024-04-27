#include <stdio.h>
#include <math.h>
int main()
{
    int givenNum, storingNum, digits, lastNum, palindrome=1;
    givenNum = 367;
    storingNum = givenNum;

    // finding the number of digits in the number
    digits = floor(log10(storingNum) + 1);
    printf("The number %d has %d digits\n", givenNum, digits);
    int arr[digits];

    for (int i=(digits-1); i>=0; i--) {
        lastNum = storingNum % 10;
        arr[i] = lastNum;
        storingNum = storingNum / 10;
    }
    printf("The number entered is:- ");
    for (int i=0; i<digits; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
    for (int j=0; j<digits; j++) {
        if (arr[j] != arr[digits-j-1]) {
            printf("The entered number %d is not palindrome!\n", givenNum);
            palindrome = 0;
            break;
        }
    }
    if (palindrome == 1) {
        printf("The entered number %d is palindrome\n", givenNum);
    }
    return 0;
}