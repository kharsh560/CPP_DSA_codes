#include <stdio.h>
#include <stdbool.h>
bool isPrime(int i)
{
    if (i == 1)
    {
        return false;
    }
    else if (i == 2 || i == 3)
    {
        return true;
    }
    else if (i % 2 == 0 || i % 3 == 0)
    {
        return false;
    }
    else
    {
        for (int j = 5; j * j <= i; j = j + 6)
        {
            if (i % j == 0 || i % (j + 2) == 0)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int n, num, countOfIterations = 0, check = 0;
    printf("Enter a number you want to get prime factors of:-\n");
    scanf("%d", &num);

    // for (int i=2; i<n; i++) {
    //     temp = n;
    //     if (isPrime(i)) {
    //         if (temp%i==0) {
    //             while (temp%i==0) {
    //                 printf("%d ", i);
    //                 temp = temp/i;
    //             }
    //         }
    //     }
    // }

    // Efficient approach
    // n = num;
    for (int i = 2; i * i <= n; i++)
    {
        countOfIterations = countOfIterations + 1;
        // printf("\n n: %d | i: %d\n", n, i);
        // if (isPrime(i))
        // {
        //     // No need to check if the number is prime or not!
        // }
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                printf("%d ", i);
                n = n / i;
                check = 1;
            }
        }
        
        // printf("\n n: %d | i: %d\n", n, i);
        if (n == 1)
        {
            break;
        }
    }
    if (n>1) {
            printf("%d\n", n);
    }
    if (check == 0) {
        printf("The number is not prime\n");
    }
    printf("\n");
    printf("Count of iteration:- %d\n", countOfIterations);
    return 0;
}