#include <stdio.h>
int factorialUningRecursion(int num) {
    int factorial = 1;
    if (num == 0 || num == 1) {
        return 1;
    }
    // factorial = factorial * factorialUningRecursion(num-1);
    return num * factorialUningRecursion(num-1);
}
int main()
{
    int num, fac=1;
    num = 8;
    // for (int i=num; i>=1; i--) {
    //     fac = fac * i;
    // }
    // printf("The factorial of %d is %d\n", num, fac);
    printf("The factorial of %d is %d\n", num, factorialUningRecursion(num));
    return 0;
}
