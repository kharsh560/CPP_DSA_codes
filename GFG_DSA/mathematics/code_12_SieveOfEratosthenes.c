#include <stdio.h>
#include <stdbool.h>
#include <math.h>

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
    int n, square;
    printf("Enter a number upto which ypu want all the prime factors:-\n");
    scanf("%d", &n);
    // for (int i=2; i<=n; i++) {
    //     if (isPrime(i)) {
    //         printf("%d ", i);
    //     }
    // }

    // Implementing Sieve of Eratosthenes:-

    // Creating an array having all the elements as boolean "true"
    bool arr[(n+1)];
    for (int i=0; i<(n+1); i++) {
        arr[i] = true;
        // printf("%d ", arr[i]);
    }
    printf("\n");
    arr[4] = false; //for tackeling the case of "4"
    // marking non-prime numbers as "false"
    for (int i=6; i<(n+1); i++) {
        if (i%2==0 || i%3==0 || i%5==0) {
            arr[i] = false;
        }
    }
    // But still its not able to handel the cases in which 
    // we have squares of the PRIME NUMBER
    // printf("These are the elements which need to be made false once again!\n");
    // Its wrong, bcoz itne toh elements hee nahi hain array mein

    // for (int i=2; i<(n+1); i++) {
    //     if (arr[i]==false) {
    //         square = pow(i,2);
    //         printf("%d ", square);
    //         // arr[square] = false; Its wrong, bcoz itne toh elements hee nahi hain array mein
    //     }
    // }
    for (int j=2; pow(j,2)<=n; j++) {
        if (arr[j]==true) {
            // printf("%d ", j*j);
            arr[j*j] = false;
            // arr[j*j*j] = false;
        }
    }
    printf("\n");
    for (int i=2; i<(n+1); i++) {
        if (arr[i]==true) {
            printf("%d ", i);
        } 
    }
    

    

    return 0;
}