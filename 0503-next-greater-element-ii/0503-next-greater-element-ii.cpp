class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> next;
        next = nums;
        for(int i = 0; i< nums.size()-1; i++){
            next.push_back(nums[i]);
        }
        next.push_back(INT_MIN);
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1 ; j < next.size(); j++){
                if(nums[i] < next[j]){
                    nums[i] = next[j];
                    break;
                }
                if(j == next.size()-1) nums[i] = -1;
            }
        }
        return nums;
    }
};