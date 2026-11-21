class Solution {
public:
vector<vector<int>> ans;
vector<int> temp;
void backtrack(vector<int> &nums, int sum, int target, int start){
    if(sum == target){
        ans.push_back(temp);
        return;
    }
    for(int i = start; i < nums.size(); i++){
        if(sum + nums[i] > target)continue;
        temp.push_back(nums[i]);
        sum += nums[i];
        backtrack(nums,sum,target,i);
        sum-= nums[i];
        temp.pop_back();
    }
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        backtrack(nums, 0, target, 0);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna