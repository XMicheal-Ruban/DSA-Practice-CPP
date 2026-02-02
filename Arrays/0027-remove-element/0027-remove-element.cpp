class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int c = 0;
        vector <int> res;
        for(int i = 0 ; i< nums.size(); i++)
        {
            if(nums[i] != val){ 
                c++;
                //nums.erase(nums.begin() + i);
                res.push_back(nums[i]);
            }
        }
        nums.assign(res.begin(), res.end());
        return c;
    }
};