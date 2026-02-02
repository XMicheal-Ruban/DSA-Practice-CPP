class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> res;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0) res.push_back(nums[i]);
        }
        int n = nums.size() - res.size();
        while(n--) res.push_back(0);
        nums = res;
    }
};