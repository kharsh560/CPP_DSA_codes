#include <iostream>
#include <utility>
#include <vector>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "Hi";
    m[4] = "this side.";
    m[2] = "there!";
    m[3] = "Harsh";

    // Below line generates error!
    // m.insert({5, "hahaha"});
    m.insert(make_pair(5, "Morning!")); // This one works!

    map<int, string> :: iterator it_map;

    // for (it_map = m.begin(); it_map != m.end(); ++it_map) {
    //     cout<<(*(it_map)).second<<" ";
    // }
    // auto it  = m.find(9);
    m.erase(9);

    for (auto &indvPair : m)
    {
        cout << indvPair.first << " " << indvPair.second << endl;
    }
}