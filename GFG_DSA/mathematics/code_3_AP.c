#include <stdio.h>
int nthTermByRecursion(int firstTerm, int num, int commonDiff) {
    int nthTerm;
    nthTerm = firstTerm + (num-1)*commonDiff;
    if (nthTerm == firstTerm) {
        return firstTerm;
    }
    return commonDiff + nthTermByRecursion(firstTerm, num-1, commonDiff);
}

int sumByRecursion(int firstTerm, int num, int commonDiff) {
    int nthTerm;
    nthTerm = firstTerm + (num-1)*commonDiff;
    if (nthTerm == firstTerm) {
        return firstTerm;
    }
    return firstTerm + sumByRecursion(firstTerm, num-1, commonDiff);
}
int main()
{
    int firstTerm = 2, commonDiff = 2, nthTerm, n, nth = 4, sum;
    // to find nth term
    // nthTerm = firstTerm;
    // for (n = 2; n<=14; n++) {
    //     nthTerm = nthTerm + commonDiff;
    // }
    // printf("The %dth term of this AP is %d\n", (n-1), nthTerm);
    // nthTerm = nthTermByRecursion(firstTerm, nth, commonDiff);
    sum = sumByRecursion(firstTerm, nth, commonDiff);
    printf("the sum upto %d term of this AP is %d\n", nth, sum);
    return 0;
}

