class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int profit = 0;
        for (int i = 1; i < nums.size(); i++) {
            int cur = 0;
            if (nums[i] > nums[i - 1]) {
                cur = nums[i] - nums[i - 1];
                profit = cur + profit;
            }
            }
            return profit;
        }
    };