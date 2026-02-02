class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> myset;
        for(int num : nums) myset.insert(num);
        int len = 1;
        for(int num : myset)
        {
            if(!myset.count(num - 1)){
                int cur = 0;
                int curnum = num;
                while(myset.count(curnum++)) cur++;
                len = max(len, cur);
            }
        }
        return len;
    }
};