class Solution {
public:
    int robhelper(vector<int>& nums, int start, int end) {
        int curr;
        int prev2 = 0;
        int prev1 = 0;
        for(int i = start; i <= end; i++){
            curr = max(nums[i] + prev2, prev1);
            prev2 = prev1;
            prev1 = curr;
        }
        return curr;
    }
    int rob(vector<int>&nums){
        if(nums.size() == 1) return nums[0];
        int p1 = robhelper(nums,0, nums.size()-2);
        int p2 = robhelper(nums,1, nums.size()-1);
        return max(p1,p2);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna