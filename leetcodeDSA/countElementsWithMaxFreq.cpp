#include <iostream>
using namespace std;

class Solution
{
public:
    int maxFrequencyElements(vector<int> &nums)
    {
        unordered_map<int, int> m;
        int max_count = 0;
        // vector<int> v;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]] = n[nums[i]] + 1;
            if (m[nums[i]].second > max_count)
            {
                max_count = m[nums[i]].second;
            }
        }
        int total_count = 0;
        for (auto it : m)
        {
            if ((*(it)).second == max_count)
            {
                total_count = total_count + (*(it)).second;
            }
        }
        return total_count;
    }
};

1->2 2->2 3->1 4->1
