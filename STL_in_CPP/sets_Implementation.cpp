#include <iostream>
#include <utility>
#include <vector>
#include <unordered_set>
#include <set>
// #include <bits/stdc++.h>
using namespace std;

int main () {
    unordered_set<int> s;
    s.insert(3);
    s.insert(32);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(4);
    for (int value : s) {
        cout << value << endl;
    }
}