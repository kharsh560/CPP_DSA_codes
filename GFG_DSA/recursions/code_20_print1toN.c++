#include <iostream>
using namespace std;
void fun1toN(int n, int i)
{
    if (i == n)
    {
        cout << i << endl;
        return;
    }
    cout << i << endl;
    fun1toN(n, i + 1);
}
void funPrint1toN(int n)
{
    if (n == 0)
        return;
    funPrint1toN(n - 1);
    cout << n << endl;
}
void funPrintNto1(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    funPrintNto1(n - 1);
}
int main()
{
    int n, i = 1;
    cout << "Enter the value of n.";
    cin >> n;
    // fun1toN(n, i);
    cout << "1 to N" << endl;
    funPrint1toN(n);
    cout << "N to 1" << endl;
    funPrintNto1(n);
}