class Solution {
public:
    bool checkOnesSegment(string s) {
        //(s.size() == 1 && s[0] == '1') return true;
        for(int i = 1; i< s.size(); i++){
            if(s[i] == '1' && s[i-1] == '0') return false;
        }
        return true;
    }
};