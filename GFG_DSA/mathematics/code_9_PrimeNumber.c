#include <stdio.h>
#include <stdbool.h>
// Best optimised method:-
bool isPrime (int i) {
    if (i == 1) {
        return false;
    }
    else if (i == 2 || i == 3) {
        return true;
    }
    else if (i%2 == 0 || i%3 == 0) {
        return false;
    }
    else {
        for (int j=5; j*j<=i; j=j+ 6) {
            if (i%j==0 || i%(j+2)==0) {
                return false;
            }
        }
    }
    return true;
}
// ############################################################################################################################################
int main()
{
    int a, check = 1;
    printf("Enter the number:- \n");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("The number %d is not a prime number!\n", a);
        check = 0;
    }
    else
    {
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                printf("The number %d is not a prime number\n", a);
                check = 0;
                break;
            }  
        }
    }

    if (check == 1)
    {
        printf("The number %d is a prime number\n", a);
    }
    return 0;
}