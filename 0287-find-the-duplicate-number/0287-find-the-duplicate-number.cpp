class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i = 0; i< nums.size(); i++){
            int idx = abs(nums[i]);
            if(nums[idx] > 0)
            nums[idx] = -nums[idx];
            else return abs(nums[i]);
        }
        return -1;
    }
};