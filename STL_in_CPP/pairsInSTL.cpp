#include <iostream>
#include <utility> //For using "pair"
using namespace std;

int main()
{
    pair<int, string> p;
    // Method 1 of initialization -> (means, declaration followed by assignment)
    p = make_pair(23, "roll");
    // cout << p.first << " is the " << p.second << " of this person" << endl;

    int a[] = {23, 435, 11};
    int b[] = {76, 984, 76};

    pair<int, int> p_array[3];

    for (int i = 0; i <= 2; i++)
    {
        // p_array[i] = {a[i], b[i]}; || It was wrong!!!!

        p_array[i].first = a[i];
        p_array[i].second = b[i];
    }
    // cout << p_array[0]
    for (int i = 0; i <= 2; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }

    int arr_x[] = {4, 7, 2, 4, 8, 3};
    cout << arr_x[2] << endl;
    int *arr_y = arr_x;
    *(arr_y + 2) = 5;
    cout << arr_x[2] << endl;
}