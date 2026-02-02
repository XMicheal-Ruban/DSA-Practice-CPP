class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int  i =0 , d = 0;
        for(int j = 1 ; j < nums.size()  ; j++)
        {
            if(nums[j] < nums[j-1]) d = i + 1;
            if(nums[j] > nums[j-1]) i = d + 1;
        }
        
        return i < d ? d+1 : i+1;
    }
};