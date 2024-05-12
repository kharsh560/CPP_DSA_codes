#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    vector<int> v;
    int x;
    cout << "Enter 5 elements of the array:- " << endl;
    for (int i = 1; i <= 5; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    printVec(v);
}