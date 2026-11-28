class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> dp(amount + 1, 0);
        dp[0] = 1;
        for(int num : coins) {
            if(num > amount) continue;
            for(int t = num; t <= amount; t++) {
                if(dp[t] > INT_MAX - dp[t - num])
                    dp[t] = INT_MAX;
                else
                    dp[t] += dp[t - num];
            }
        }
        return dp[amount];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna