class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.size(), n = p.size();
        vector<vector<bool>> dp(m+1, vector<bool> (n+1, false));
        dp[0][0] = true;
        for(int i = 2; i <= n; i++){
            if(p[i-1] == '*'){
                dp[0][i] = dp[0][i-2];
            }
        }
        for(int i = 0; i<= m; i++){
            for(int j = 0; j <= n; j++){
                if(s[j] == p[j] || p[j] == '.'){
                    dp[i][j] = d[i][j-1];
                }
            }
        }
    }
};