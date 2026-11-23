class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),0);
        if(nums.size() == 1) return nums[0];
        dp[0] = nums[0];
        dp[1] = max(nums[1], dp[0]);
        for(int i = 2; i < nums.size(); i++){
            dp[i] = max(nums[i] + dp[i-2], dp[i-1]);
        }
        return dp[nums.size()-1];
    }
};
/*int backtrack(vector<int> &nums, int i){
    if(i>= nums.size())return 0; We used to do return; but here we need a value, so the core func max(x,y) could have to lean on. 
    //Choosing the current house to rob
    int rob = nums[i] + backtrack(nums, i+2); We have to choose adjacent house na, so i+2
    //Skip the current house
    int skip = backtrack(nums, i+1);
    return max(rob, skip);
     */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna