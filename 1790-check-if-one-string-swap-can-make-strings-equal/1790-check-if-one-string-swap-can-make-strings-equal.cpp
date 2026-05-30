class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1 == s2) return true;
        int i, j;
        bool one = false;
        for(int k = 0; k < s1.size(); k++){
            if(s1[k] != s2[k]){
                if(!one){
                    one = true;
                    i = k;
                }
                else {
                    j = k;
                    break;
                }
            }
        }
        swap(s2[i], s2[j]);
        return s1 == s2;

    }
};