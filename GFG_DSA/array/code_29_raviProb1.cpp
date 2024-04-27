#include <iostream>
#include <math.h>
using namespace std;
// decimal to binary
// method:-
// 10 -> 1010
// (10 & 1) -> gives LSB
// ## But we need to reverse the digits we get from it, so need to do this => "(bit * pow(10, i))"
// and now right shift "10" by 1 bit and do the same thing.
int main()
{
    int n;
    cout << "enter any number  : ";
    cin >> n;

    int answer = 0;
    int i = 0;

    while (n != 0)
    {
        int bit = (n & 1);
        answer = (bit * pow(10, i)) + answer;
        n = n >> 1;
        i++;
    }

    cout << answer << endl;
}