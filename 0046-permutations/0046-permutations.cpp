class Solution {
public:
//identifiers
vector<vector<int>> ans;
vector<int> temp;
vector<bool> used; //used to mark elements that we have taken into consideration, prevents duplicates...
void backtrack(vector<int> &nums){
if(temp.size() == nums.size()){ //push the subset into the resulyt if we have considered all elements
    ans.push_back(temp);
    return;
}
//choices : starting the array from 0 cause permutations includes to go back and fro, atleast with our approach
for(int i = 0; i < nums.size(); i++){
    if(used[i])continue; //If the current element is already marked, we move to find other
    used[i] = true; //Mark the current element as visited
    temp.push_back(nums[i]);
    //explore
    backtrack(nums);
    //backtrack
    temp.pop_back();
    used[i] = false;
} 
}
    vector<vector<int>> permute(vector<int>& nums) {
        used.resize(nums.size(),false);
        backtrack(nums);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna