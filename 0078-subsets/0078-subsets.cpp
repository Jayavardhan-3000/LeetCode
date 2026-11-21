class Solution {
public:
//identifiers
vector<vector<int>> ans; //final result
vector<int> temp;//to store current subsets
void backtrack(vector <int> &nums, int start){
//base case
ans.push_back(temp);
//choices
for(int i = start; i < nums.size(); i++){
//constraints
temp.push_back(nums[i]);
//explore
//backtrack fun
backtrack(nums,i+1); //We don't want the current element to repeat
//backtrack
temp.pop_back();
}
}
    vector<vector<int>> subsets(vector<int>& nums) {
        backtrack(nums,0);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna