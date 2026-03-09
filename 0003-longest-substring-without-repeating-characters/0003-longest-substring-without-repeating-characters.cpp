class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int maxlen = 0;
        set<char> myset;
        for(int i = 0; i < s.size(); i++){
            while(myset.find(s[i]) != myset.end()){
                myset.erase(s[left]);
                left++;
            }
            myset.insert(s[i]);
            maxlen = max(maxlen, i - left + 1);
        }
        return maxlen;
    }
};