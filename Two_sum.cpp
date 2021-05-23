#include <bits/stdc++.h>
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        unordered_map<int, int> store;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {
            int remians = target - nums[i];
            if (store.find(remians) != store.end())
            {
                ans.push_back(store[remians]);
                ans.push_back(i);
            }

            store[nums[i]] = i;
        }

        return ans;
    }
};