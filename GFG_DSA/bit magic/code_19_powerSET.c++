#include <iostream>
using namespace std;
#include <math.h>

void printPowerSet(char arr[], int size)
{
    cout << "{ }";
    for (int i = 0; i <= (pow(2, size) - 1); i++)
    {
        // if ((i & 1) != 0)
        // {
        //     cout << "a";
        // }
        // if ((i & 2) != 0)
        // {
        //     cout << "b";
        // }
        // if ((i & 4) != 0)
        // {
        //     cout << "c";
        // }
        for (int j = 0; j < size; j++)
        {
            if ((i & (1 << j)) != 0)
            {
                cout << arr[j];
            }
        }
        printf("\n");
    }
}

int main()
{
    char givenStr[] = "abcd";
    int size = (sizeof(givenStr) / sizeof(givenStr[0])) - 1; // did "-1" because of the "\o" character used to signify the end of string.
    // cout << size;
    printPowerSet(givenStr, size);
    // cout << (3 & 2);
}