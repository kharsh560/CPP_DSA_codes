#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main()
{
    vector<pair<int, int> > v_p;
    int n, x, y;
    cout << "Enter the number of pairs to be entered" << endl;
    cin >> n;
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the elements in pair number " << i << endl;
        pair<int, int> temp;
        cin >> x;
        temp.first = x;
        cin >> y;
        temp.second = y;
        v_p.push_back(temp);
    }
    // Printing the values present in the vector of pairs using simple ".first" and ".second"
    for (int j = 0; j < n; j++)
    {
        cout << v_p[j].first << " " << v_p[j].second << endl;
    }
    // Printing the values present in the vector of pairs using iterators
    vector<pair<int, int> >::iterator it_p;
    it_p = v_p.begin();
    cout << (*(it_p)).first << endl;
    cout << ((it_p)->second) << endl;
    cout << ((it_p+1)->first) << endl;
    cout << ((it_p+1)->second) << endl;
}
