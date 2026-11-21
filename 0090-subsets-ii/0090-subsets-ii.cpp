class Solution {
public:
//identifiers
vector<vector<int>> ans;
vector<int>temp;

void backtrack(vector<int> & nums, int start){
    //base case : no conditional statement cause everything is eligible
    ans.push_back(temp);
    //choice : We are considering every element
    for(int i = start; i < nums.size(); i++){
        //constraint : No duplicates are allowed
        //i > start just masks away a finite array of elements currently accesible from previous elements that aren't part of
        //Explaination : nums = [1,2,2,3]; current elements into consideration at iteraton i = 2
        //               curr =     [2,3], but here the condition nums[i-1] == nums[i] states true, cause 2 == 2
        //Notice how previous elements is affecting the current array even it ain't in consideration, i > start helps with that
        if(i > start && nums[i-1] == nums[i])continue;
        temp.push_back(nums[i]);
        //explore
        backtrack(nums,i+1);
        //backtrack
        temp.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        backtrack(nums,0);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna