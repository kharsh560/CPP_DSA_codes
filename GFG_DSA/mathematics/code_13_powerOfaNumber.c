#include <stdio.h>
int main()
{
    int b, p, prod = 1, tempB, tempP;
    printf("Enter the base and power for a number's power to be calculated.\n");
    printf("Enter base:-\n");
    scanf("%d", &b);
    printf("enter power:-\n");
    scanf("%d", &p);

    tempB = b;
    tempP = p;

    while (p>0) {
        if(p%2!=0) {
            // bit is 1
            prod = prod * b;
        }
        else {
            // bit is 0
        }
        p=p/2;
        b = b * b;
    }
    printf("%d raised to the power of %d is %d\n", tempB, tempP, prod);
    return 0;
}