class Solution {
public:
    int jump(vector<int>& nums) {
        int n = 0, f = 0, jumps =0;
        while(f < nums.size()- 1)
        {
            int far = 0;
            for(int i = n ; i <= f; i++)
            {
                far = max(far, nums[i]+ i);
            }
            n = f++;
            f = far;
            jumps++;
        }
        return jumps;
    }
};