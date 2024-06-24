// Double hashing condition is that the "h2(key)" and the "m" which is number of
// slots in the hash table, they must be prime

// So here. I'm trying to validate the same.

#include <iostream>
using namespace std;

int main()
{
    int h = 5, m = 13;
    cout << "h = " << h << " m = " << m << endl;
    for (int i = 0; i < m; i++)
    {
        cout << ((i + 1) * h) % m << " ";
    }
}