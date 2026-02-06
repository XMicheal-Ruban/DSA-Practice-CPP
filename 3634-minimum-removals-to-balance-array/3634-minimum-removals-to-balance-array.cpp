class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int i = 0, ans = 0;
        sort(nums.begin(), nums.end());
        for(int j =0; j< nums.size(); j++ ){
            while(nums[j] > nums[i]*k){
                i++;
            }
            ans = max(ans,j - i+1 );
        }
        return nums.size() - ans;
        }
};