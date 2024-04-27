#include <stdio.h>
#include <math.h>
long long factorialUningRecursion(int num)
{
    int factorial = 1;
    if (num == 0 || num == 1)
    {
        return 1;
    }
    // factorial = factorial * factorialUningRecursion(num-1);
    return num * factorialUningRecursion(num - 1);
}
int main()
{
    int n, i=1, trailingZeros = 0, countOftwo = 0, countOffives = 0, factorial = 1, iFortwo, iForfive;
    printf("enter the number whose factorial's trailing zeros you want!\n");
    scanf("%d", &n);
    // long long factorialOfn = factorialUningRecursion(n);

    // while(factorialOfn%10==0) {
    //     count++;
    //     factorialOfn = factorialOfn/10;
    // }
    // printf("The number of trailing zeros in factorial of the given number is %d\n", count);

    // After knowing the fact that the countoffives is going to be always lesser than countoftwos, so the "countofifves" number of pairs are only goanna be formed!

    // for (int i = 2; i <= n; i++)
    // {
    //     iForfive = i;
    //     iFortwo = i;
    //     // printf("%d %d\n",iFortwo, iForfive);  //for checking
    //     while (iFortwo / 2 != 0)
    //     {
    //         if (iFortwo % 2 == 0)
    //         {
    //             countOftwo++;
    //         }
    //         iFortwo = iFortwo / 2;
    //     }
    //     while (iForfive / 5 != 0)
    //     {
    //         if (iForfive % 5 == 0)
    //         {
    //             countOffives++;
    //         }
    //         iForfive = iForfive / 5;
    //     }
    // }

    // if (countOftwo > countOffives)
    // {
    //     printf("The number of trailing zeros are:- %f\n", countOffives);
    // }
    // else
    // {
    //     printf("The number of trailing zeros are:- %f\n", countOftwo);
    // }

    // After knowing the fact that the countoffives is going to be always lesser than countoftwos, so the "countofifves" number of pairs are only goanna be formed!
    // for (int i=2; i<=n; i++) {
    //     iForfive = i;
    //     if (iForfive%5==0) {
    //         while (iForfive/5!=0 && iForfive%5==0) {
    //             countOffives++;
    //             iForfive = iForfive / 5;
    //         }
    //         printf("for %d countoffives = %d\n", i, countOffives);
    //     }
    // }
    // printf("So the number of trailing zeros in the %d! is %d\n", n, countOffives);

    // sandeep sir's method

    // printf("%f\n", pow(5,i));
    while (n/(pow(5,i)) != 0) {
        trailingZeros = trailingZeros + n/(pow(5,i));
        i++;
    }
    // for (int j=5; j<=n; j=j*5) {
    //     trailingZeros = trailingZeros + n/5;
    // }    Another method
    printf("The number of trailing zeros in the %d! is %d\n", n, trailingZeros);
    return 0;
}