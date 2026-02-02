class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> st;

        for(const int& num : nums){
            if(st.count(num) > 0){
                return true;
            }

            st.insert(num);
        }

        return false;
    }
};

//auto init = atexit([]() { ofstream("display_runtime.txt") << "0"; });