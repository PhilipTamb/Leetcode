#include <algorithm>
#include <unordered_set>
#include <vector>
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        bool result = false;
        unordered_set<int> set_nums;

        for (int i : nums)
        {
            if (set_nums.find(i) != set_nums.end())
            {
                return result = true;
            }
            set_nums.insert(i);
        }
        return result;
    }
};