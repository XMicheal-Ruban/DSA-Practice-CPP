class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxs = nums[0], mins = nums[0], res = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < 0) swap(maxs,mins);
            maxs = max(nums[i], maxs*nums[i]);
            mins = min(nums[i], mins*nums[i]);
            res = max(maxs, res);
        }
        return res;
    }
};