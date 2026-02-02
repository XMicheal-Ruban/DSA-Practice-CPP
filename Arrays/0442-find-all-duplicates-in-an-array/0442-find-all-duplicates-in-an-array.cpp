//#include <algorithm>
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0;i < nums.size(); i++)
        {
            int cur =  abs(nums[i]) - 1;
            if(nums[cur] < 0) ans.push_back(abs(nums[i]));
            else nums[cur] = -nums[cur];
        }
        return ans;
    }
};