#include <vector>

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> result;
        bool presence = false;

        for (int j = 0; j < nums.size(); j++)
        {
            for (int i = j + 1; i < nums.size(); i++)
            {
                if ((nums[j] + nums[i]) == target)
                {
                    for (int z = 0; z < result.size(); z++)
                    {
                        if (result[z] == j or result[z] == i)
                        {
                            presence = true;
                        }
                    }
                    if (presence == false and i != j)
                    {
                        result.insert(result.end(), i);
                        result.insert(result.end(), j);
                    }
                    else if (presence == false and i == j)
                    {
                        result.insert(result.end(), i);
                    }
                }
                presence = false; // reset
            }
        }
        return result;
    }
};
