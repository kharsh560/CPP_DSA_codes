#include <stdio.h>
int sumUsingIteration(int n) {
    int x=0;
    for(int i=1; i<=n; i++) {
        x = x + i;
    }
    return x;
}

int sumUsingFormula(int n) {
    int sum;
    sum = (n*(n+1)/2);
    return sum;
}

int main()
{
    int n;
    printf("Enter the number upto which you want the sum!\n");
    scanf("%d", &n);
    printf("The sum upto number %d is %d\n", n, sumUsingFormula(n));
    return 0;
}