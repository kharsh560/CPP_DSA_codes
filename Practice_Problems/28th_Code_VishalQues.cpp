#include <iostream>
#include <stdio.h>
using namespace std;

// Q:-
// Return the sum of the numbers in the array, except ignore sections
// of numbers starting with a 6 and extending to the next 9 (every 6 will be
// followed by at least one 9). Return 0 for no numbers.
// Eg:-
// summer_69([1, 3, 5]) --> 9
// summer_69([ 4, 5, 6, 7, 8, 9 ])-- > 9
// summer_69([ 2, 1, 6, 9, 11 ])-- > 14

int main()
{
    // int arr[] = {3, 4, 3, 4, 6, 1, 16, 6, 4, 10, 9};
    int arr[] = {1, 2, 3, 6, 7, 8, 9, 3, 1, 6, 1, 2};
    int sum = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    int addUp = 1; // Assumed it to be boolean's "1" => True => Means we do have to add the numbers
    int sixIndex = -1, nineIndex = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 6)
        {
            addUp = 0;
            sixIndex = i;
        }

        if (arr[i] == 9)
        {
            addUp = 1;
            if (!(sixIndex < 0)) // Means if sixIndex is not less than 0
            // Means if you have got "6" before you got this 9, then:- Continue
            {
                sixIndex = -1;
                continue;
            }
            // Else carry on in this iteration and add this "9" also.
        }
        if (addUp) // If addUp = 1 => True, then add the numbers
            sum = sum + arr[i];
        else
        {
            continue; // eles in addUp = 0 => False condn, continue
        }
    }
    if (!addUp) // If addUp is "0" => means false till now, means a "6" was encountered, but no "9" after it, so, add up the numbers from that "6" onwards!
    {
        for (int i = sixIndex; i < size; i++)
        {
            sum = sum + arr[i];
        }
    }
    cout << sum;
}