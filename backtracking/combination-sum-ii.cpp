class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int>combination;
        vector<vector<int>> result;
        comb(candidates, target, combination, 0,0,result);
        return result;
    }
    void comb(vector<int>& candidates, int target, vector<int>&combination, int sum, int ind, vector<vector<int>>& result){
        if(sum > target) return;
        if(sum==target){
            result.push_back(combination);
            return;
        }
        for(int i = ind; i < candidates.size(); i++){
            if (sum + candidates[i] > target) break;
            if (i > ind && candidates[i] == candidates[i - 1])continue;
            combination.push_back(candidates[i]);
            sum += candidates[i];
            comb(candidates, target, combination, sum, i+1,result);
            combination.pop_back();
            sum -= candidates[i];
        }
    }
};