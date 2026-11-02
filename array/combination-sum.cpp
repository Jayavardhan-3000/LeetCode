class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>combination;
        vector<vector<int>> result;
        comb(candidates, target, combination, 0,0,result);
        return result;
    }
    void comb(vector<int>& candidates, int target, vector<int>combination, int sum, int ind, vector<vector<int>>& result){
        if(sum > target) return;
        if(sum==target){
            result.push_back(combination);
            return;
        }
        for(int i = ind; i < candidates.size(); i++){
            combination.push_back(candidates[i]);
            sum += candidates[i];
            comb(candidates, target, combination, sum, i,result);
            combination.pop_back();
            sum -= candidates[i];
        }
    }
};