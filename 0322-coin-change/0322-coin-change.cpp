class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1, amount+1);
        dp[0] = 0;
        for(int num: coins){
            for(int t = num; t <= amount; t++){
                dp[t] = min(dp[t], 1+dp[t-num]);
            }
        }
        return dp[amount] == amount + 1 ? -1 : dp[amount];    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna