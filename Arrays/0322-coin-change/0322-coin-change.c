int min (int a, int b)
{
    return a < b ? a:b;
}
int coinChange(int* coins, int coinsSize, int amount) {
    if(amount == 0) return 0;
    if(coinsSize == 0) return -1;
    int dp[amount + 1];
    dp[0] = 0;
    for(int i = 1; i<= amount; i++)
        dp[i] = INT_MAX -1;
    for(int i = 1 ; i <= amount; i++)
    {
        for(int j = 0 ; j < coinsSize; j++)
        {
            if(coins[j] <= i)
                dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
        }
    }
    if(dp[amount] == INT_MAX - 1) return -1;
    return dp[amount];
}