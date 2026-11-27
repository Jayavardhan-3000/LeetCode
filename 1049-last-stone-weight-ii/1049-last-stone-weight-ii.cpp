class Solution {
public:
    int lastStoneWeightII(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)sum+= nums[i];
        int target = sum/2;
        vector<bool>dp(target+1,false);
        dp[0] = true;
        for(int i = 0; i < nums.size(); i++){
            for(int t = target; t >= nums[i]; t--){
                dp[t] = dp[t] || dp[t - nums[i]];
            }
        }
        for(int t = target; t >= 0; t--)
        if(dp[t])
        return sum - 2*t;
        return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna