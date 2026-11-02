class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
          int n = nums.size();
        set<vector<int>> uniqsubsets;
        for(int mask = 0; mask < (1<< n); mask++){
            vector<int> subset;
            for(int i = 0; i < n; i++){
                if(mask & (1 << i)){
                    subset.push_back(nums[i]);
                }
               
            }
             uniqsubsets.insert(subset);
        }
        vector<vector<int>> subsets(uniqsubsets.begin(),uniqsubsets.end());
        return subsets;
    }
};