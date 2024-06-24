#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main()
{
    // Initializing a vector
    // vector<int> v = {3, 6, 3, 8, 1, 2}; //Not working, this format in which
    // the elements are inserted into a curly braces is not working!!
    // So I'm using the push_back function now.
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
    // We surely can surely access the elements of this vector "v" by using indexing; v[0]
    // For example;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // Using "iterators for vectors"
    vector<int>::iterator it_harsh;
    it_harsh = v.begin();
    cout << v[3] << endl;
    cout << (*(it_harsh + 3)) << endl;

    
}