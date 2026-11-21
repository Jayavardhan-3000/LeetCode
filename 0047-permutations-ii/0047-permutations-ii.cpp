class Solution {
public:
//identifiers
vector<vector<int>> ans;
vector<int> temp;
vector<bool> used; //used to mark elements that we have taken into consideration, prevents duplicates...
void backtrack(vector<int> &nums){
if(temp.size() == nums.size()){ //push the subset into the result if we have considered all elements
    ans.push_back(temp);
    return;
}
//choices : starting the array from 0 cause permutations includes to go back and fro, atleast with our approach
for(int i = 0; i < nums.size(); i++){
    //constraints
    if(used[i])continue; //If the current element is already marked, we move to find other
    if(i > 0 && nums[i] == nums[i-1] && !used[i-1])continue;
    //let's suppose an array [1,1,2], used = [true,false,false], we can use the second 1 cause there's first one leading the permutation
    //If used = [false,false,false], which occurs after full backtracking of iteration 0, now we are at i = 1, meaning that second 1
    //We won't allow duplicates, here the second one leads the second permutation which is similar to the permuatation led by first 1
    //So we continue with the duplicate iteration, forcing only the first element of duplicates to take the lead
    used[i] = true; //Mark the current element as visited
    temp.push_back(nums[i]);
    //explore
    backtrack(nums);
    //backtrack
    temp.pop_back();
    used[i] = false;
} 
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        used.resize(nums.size(),false);
        backtrack(nums);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna