class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()) return false;
        vector<int> w1, w2;
        unordered_map<char, int> map1, map2;
        for(char c : word1) map1[c]++;
        for(char c : word2) map2[c]++;
        for(char c = 'a' ; c <= 'z' ; c++){
            if((map1.count(c) >0) != map2.count(c) > 0) return false;
        }
        for(auto it : map1) w1.push_back(it.second);
        for(auto it : map2) w2.push_back(it.second);
        sort(w1.begin(), w1.end());
        sort(w2.begin(), w2.end());
        return w1 == w2;
    }
};