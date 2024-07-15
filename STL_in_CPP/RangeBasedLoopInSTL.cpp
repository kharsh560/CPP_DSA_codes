#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int n, x;
    cout << "Enter the number of elements" << endl;
    cin >> n;
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    // Printing using the Range based loop
    for (int value : v)
    {
        cout << value << " ";
    }
    cout << endl;

    vector<pair<int,int> > v_p;
    v_p.push_back(make_pair(3,4));
    v_p.push_back(make_pair(12, 65));

    for (pair<int, int> value : v_p) {
        cout << value.first << " " << value.second << endl;
    }
    cout<<endl;
}