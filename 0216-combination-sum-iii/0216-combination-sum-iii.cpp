class Solution {
public:
//Identifiers
int k;
vector<int> nums = {1,2,3,4,5,6,7,8,9};
vector<vector<int>> ans;
vector<int> temp;
void backtrack(vector<int> &nums, int sum, int target, int start){
    //base case
    if(sum == target && temp.size() == k){
        ans.push_back(temp);
        return;
    }
    //choice: Iterate all possible elements but in order, if no order needed we could do i = 0, like [2,2,3] and [3,2,2] is considered different
    for(int i = start; i < nums.size(); i++){
        //constraint : if greater than the target, no need to consider the element
        if(sum + nums[i] > target)break;
        if(i > start && nums[i] == nums[i-1])continue;
        temp.push_back(nums[i]);
        sum += nums[i];
        //explore : Notice how we did i+1 unlike i in combinationsI, cause we can't use the element multiple times, it is considered duplicate
        backtrack(nums,sum,target,i+1);
        //backtrack
        sum-= nums[i];
        temp.pop_back();
    }
}
    vector<vector<int>> combinationSum3(int k1, int target) {
        k = k1;
        backtrack(nums, 0, target, 0);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna