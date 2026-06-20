class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOp) {
        int low = 1, high = *max_element(nums.begin(),nums.end() );
        while(low < high){
            int mid = low + (high - low)/ 2;
            int ops = 0;
            for(int num : nums) if((ops += (num-1)/ mid) > maxOp) break;
            ops <= maxOp ? high = mid : low = mid + 1;
        }
        return high;
    }
};