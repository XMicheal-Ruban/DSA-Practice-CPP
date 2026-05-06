class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rightsum = accumulate(nums.begin(), nums.end(), 0);
        int leftsum = 0;
        for(int idx = 0; idx < nums.size(); idx++){
            rightsum -= nums[idx];
            if(leftsum == rightsum) return idx;
            leftsum+= nums[idx];
        }
        return -1;
    }
};