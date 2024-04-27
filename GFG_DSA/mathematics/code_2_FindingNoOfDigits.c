#include <stdio.h>
int countingDigitsInNumber(long num) {
    // int count;
    // if (num==0) {
    //     return count;
    // }
    // else {
    //     num = num / 10;
    //     count = count + 1;
    // }
    // return countingDigitsInNumber(num);
    if (num == 0) {
        return 0;
    }
    return 1 + countingDigitsInNumber(num/10);
}
int main()
{
    long a = 725234234632353, n=0;
    // while (a != 0) {
    //     n = n+1;
    //     a = a / 10;
    // }

    printf("There are total %d digits in this number\n", n);
    return 0;
}
