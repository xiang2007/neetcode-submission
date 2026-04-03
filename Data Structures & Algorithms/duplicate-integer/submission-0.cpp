#include <algorithm>
#include <iostream>
#include <vector>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums);
};

bool Solution::hasDuplicate(vector<int>& nums)
{
    sort(nums.begin(), nums.end());
    for (int i=0; i<nums.size(); i++){
        int j=i+1;
        if (nums[i] == nums[j])
            return true;
    }
    return false;
}