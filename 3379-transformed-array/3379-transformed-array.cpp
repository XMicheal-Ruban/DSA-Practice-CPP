class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        for(int i = 0; i< n; i++){
            if(nums[i] == 0) ans[i] = nums[i];
            else if(nums[i] > 0){
                int k = nums[i], right = i;
                while(k--){
                    right = (right+1) %n;
                }
                ans[i] = nums[right];
            }
            else{
                int k = abs(nums[i]), l = i;
                while(k--){
                    if(l-1 == -1){
                        l = n -1;
                        continue;
                    }
                    l = (l -1)%n;
                }
                ans[i] = nums[l];
            }
        }
        return ans;
    }
};