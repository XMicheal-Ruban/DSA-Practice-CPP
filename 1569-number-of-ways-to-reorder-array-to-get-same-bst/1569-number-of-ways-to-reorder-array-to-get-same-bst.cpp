class Solution {
public:
long long mod = 1e9 + 7;
vector<vector<long long>> table;
    int numOfWays(vector<int>& nums) {
        int n = nums.size();
        table.resize(n+1);
        for(int i =0; i <= n; i++){
            table[i] = vector<long long> (i + 1, 1);
            for(int j = 1; j < i; j++){
                table[i][j] = (table[i-1][j-1] + table[i-1][j]) % mod;
            }
        }
        long long ans = dfs(nums);
        return ans % mod -1;
    }
    long long dfs(vector<int>& nums){
        int n = nums.size();
        if(n <= 2) return 1;
        vector<int> left, right;
        for(int i = 1; i < n; i++){
            if(nums[i] > nums[0]) right.push_back(nums[i]);
            else left.push_back(nums[i]);
        }
        long long l_res = dfs(left);
        long long r_res = dfs(right);
        int llen = left.size(), rlen = right.size();
        return ((table[n-1][llen] * l_res)%mod) * r_res % mod;
    }
};