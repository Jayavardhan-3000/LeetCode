class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        for(int num: nums)sum += num;

        if(abs(target) > sum || (sum+target)%2)return 0;
        int k = (sum+target)/2;
        vector<int>dp(k+1,0);
        dp[0] = 1;
        for(int num:nums){
            for(int t = k; t >= num; t--){
                dp[t] += dp[t-num];
            }
        }
        return dp[k];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna