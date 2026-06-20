class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int , int> map;
        map[0] = 1;
        int prefix = 0;
        int ans = 0;
        for(int num : nums){
            prefix += (num % 2);
            if(map.count(prefix - k)) ans+= map[prefix - k];
            map[prefix]++;
        }
        return ans;
    }
};