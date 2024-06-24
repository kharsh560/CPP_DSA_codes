#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main()
{
    vector<pair<int, int>> vecOfPair;
    vector<pair<int, string>> vecOfPair2;
    // Working:-
    vecOfPair2.push_back(make_pair(48, "Harsh"));
    // vecOfPair2.push_back({47, "Aditya"});
    vecOfPair2.push_back(make_pair(47, "Aditya"));
    // Not working:-
    // vecOfPair2[0] = {48, "Harsh"};
    // vecOfPair2[1] = {47, "Aditya"};
    // vecOfPair2[1] = {57, "Vishal"};

    for (int i = 0; i < vecOfPair2.size(); i++)
    {
        cout << vecOfPair2[i].first << " is roll of " << vecOfPair2[i].second << "." << endl;
    }

    // Making array of vectors:-
    // int arr[] = {(vector<int> v1), (vector<int> v2)}; || No, its not the way
}
