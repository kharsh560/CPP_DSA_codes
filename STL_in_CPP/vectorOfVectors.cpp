#include <iostream>
#include <utility>
#include <vector>
using namespace std;

// Making vector of vectors

int main()
{
    vector<vector<int> > v;
    int N, n, x;
    cout << "Enter the number of rows." << endl;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        vector<int> temp;
        cout << "Enter the number of columns for row number " <<i << endl;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cout << "Enter the element number " << j << " of " << i << "th row which, as per you has "<< n <<" elements" << endl;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    cout<< "Here is the vector of vectors" <<endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < (v[i].size()); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

