#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers:- \n");
    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b)
    {
        for (int i = 1; i <= b; i++)
        {
            if ((a * i) % b == 0)
            {
                printf("The LCM of %d and %d is %d\n", a, b, (a * i));
                break;
            }
        }
    }
    else
    {
        for (int i = 1; i <= a; i++)
        {
            if ((b * i) % a == 0)
            {
                printf("The LCM of %d and %d is %d\n", a, b, (b * i));
                break;
            }
        }
    }

    return 0;
}