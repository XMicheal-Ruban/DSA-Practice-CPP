class Solution {
    long long mod = 1e9 + 7;
    vector<vector<long long>> table;
public:
    int numOfWays(vector<int>& nums) {
        int n = nums.size();
        table.resize(n + 1, vector<long long>(n + 1, 1));
        for(int i = 2; i<= n; i++ ){
            for(int j = 1; j < i; j++){
                table[i][j] = (table[i-1][j-1] + table[i-1][j]) % mod;
            }
        } 
        return (dfs(nums) - 1 + mod) % mod;
    }
    long long dfs(vector<int>& nums ){
        if(nums.size() <= 2) return 1;
        vector<int> left, right;
        int root = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < root) left.push_back(nums[i]);
            else right.push_back(nums[i]);
        }
        long long leftways = dfs(left) % mod;
        long long rightways = dfs(right) % mod;
        int L = left.size();
        int R = right.size();
        return (((table[L + R][L] * leftways) % mod) * rightways) % mod;
    }
};
