#include <iostream>
using namespace std;

int main()
{
    long int n, remainderArray[100], i = 0, k;
    cout << "Enter a number in decimal system which you want to be converted into binary equivalent:- ";
    cin >> n;
    cout << "Enter the value of k";
    cin >> k;

    // finding the binary equivalent of the entered number
    while (n != 0)
    {
        remainderArray[i] = n % 2;
        n = (n - remainderArray[i]) / 2;
        ++i;
    }
    // Printing the remainderArray
    cout << "Binary equivalent of entered number is ";
    for (int j = (i - 1); j >= 0; j--)
    {
        cout << remainderArray[j];
    }
    // if k-th is set or not
    if (remainderArray[k - 1] == 1)
    {
        cout << "\nset";
    }
    else
    {
        cout << "\nnot set";
    }

    printf("\n");
    return 0;
}