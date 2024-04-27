#include <stdio.h>
int euclideanAlgoGCD(int a, int b)
{
    while (a != b)
    {
        if (a < b)
        {
            b = b - a;
        }
        else
        {
            a = a - b;
        }
    }
    return a;
}
int main()
{
    int a, b;
    printf("Enter two numbers:- \n");
    scanf("%d", &a);
    scanf("%d", &b);

    // finding GCD/HCF by naive solution:-

    // printf("Here, we go; \n");
    // if (a > b)
    // {
    //     for (int i = (a / 2); i >= 1; i--)
    //     {
    //         if (a % i == 0 && b % i == 0)
    //         {
    //             printf("'%d' is the HCF or GCD of %d and %d!\n", i, a, b);
    //             break;
    //         }
    //     }
    // }
    // else
    // {
    //     {
    //         for (int i = (b / 2); i >= 1; i--)
    //         {
    //             if (a % i == 0 && b % i == 0)
    //             {
    //                 printf("%d is the HCF or GCD of %d and %d!\n", i, a, b);
    //                 break;
    //             }
    //         }
    //     }
    // }

    // finding GCD/HCF by Euclidean Algorithm:-
    printf("%d is the HCF or GCD of %d and %d!\n", euclideanAlgoGCD(a,b), a, b);


    return 0;
}