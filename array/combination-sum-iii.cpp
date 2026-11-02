class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> combination;
        vector<vector<int>> result;
        comb(k, n, combination, result, 1, 0);
        return result;
    }
    void comb(int k, int target, vector<int>& combination, vector<vector<int>>&result, int start, int sum){
        if(sum > target)return;
        if(sum == target){
        if(combination.size() == k){
            result.push_back(combination);
            return;
        }
        }
        for(int i = start; i < 10; i++){
            if(sum + i > target)break;
            combination.push_back(i);
            comb(k, target, combination, result, i+1, sum + i);
            combination.pop_back();
        }
    }
};