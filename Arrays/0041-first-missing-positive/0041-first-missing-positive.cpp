class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int, bool> map;
        for(int i = 0 ; i < nums.size(); i++)
        {
            if(nums[i] > 0)
            map[nums[i]] = 1;
        }
        int i = 1;
        while(true)
        {
            if(map.find(i) == map.end())
            return i;
            i++;
        }
    }
};
//auto init = atexit([]() { ofstream("display_runtime.txt") << "0"; });