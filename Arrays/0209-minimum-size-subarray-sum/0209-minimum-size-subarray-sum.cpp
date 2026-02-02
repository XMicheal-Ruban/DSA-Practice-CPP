class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        long long sum = 0;
        int ans = INT_MAX;

        for (int r = 0; r < n; r++) {
            sum += nums[r];  // expand window to the right

            // while window is valid, try to shrink from left
            while (sum >= target) {
                ans = min(ans, r - l + 1); // record minimal length
                sum -= nums[l];            // shrink window
                l++;
            }
        }

        return (ans == INT_MAX) ? 0 : ans;
    }
};
