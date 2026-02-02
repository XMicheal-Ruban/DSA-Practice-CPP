class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        
        // Store dictionary in a set for fast lookup
        unordered_set<string> dict(wordDict.begin(), wordDict.end());
        
        int n = s.size();
        
        // dp[i] = true means s[0..i-1] can be segmented
        vector<bool> dp(n + 1, false);
        
        dp[0] = true;  // empty string is always valid

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                
                // If left part is valid AND right part is in dictionary
                if (dp[j] && dict.count(s.substr(j, i - j))) {
                    dp[i] = true;
                    break;
                }
            }
        }

        return dp[n];
    }
};
