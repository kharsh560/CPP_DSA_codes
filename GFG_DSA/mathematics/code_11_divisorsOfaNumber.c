#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter a number you want to get factors/divisors of:-\n");
    scanf("%d", &n);

    // for (int i=1; i*i<=n; i++) {
    //     if (n%i==0) {
    //         if (i==n/i) {
    //             printf("%d", i);
    //         }
    //         else {
    //             printf("%d %d ", i, (n/i));
    //         }
    //     }
    // }

    // In order to get the divisors in order, we can traverse the loops two times:-
    for (int i=1; i*i<n; i++) {
        if (n%i==0) {
                printf("%d ", i);
        }
    }
    for (int i=sqrt(n); i>=1; i--) {
        if (n%i==0) {
                printf("%d ", (n/i));
        }
    }
    return 0;
}