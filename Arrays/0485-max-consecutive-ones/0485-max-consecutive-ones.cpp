class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, mx = 0;
        for (int num : nums) {
            if (num == 1) {
                count++;
                mx = max(mx, count);
            } else {
                count = 0;
            }
        }
        return mx;
    }
};
