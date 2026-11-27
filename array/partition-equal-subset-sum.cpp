class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int tsum = 0;
        for(int i = 0; i < nums.size(); i++){
            tsum += nums[i];
        }
        if(tsum%2)return false;
        int target = tsum/2;
        vector<bool>dp(target+1,false);
        dp[0] = true;
        for(int i = 0; i < nums.size(); i++){
            for(int t = target; t >= nums[i]; t--){
                dp[t] = dp[t] || dp[t - nums[i]];
            }
        }
    return dp[target];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna