class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int i = 0, maxdiff = 0;
        sort(nums.begin(), nums.end());
        if(nums.size() < 2) return 0;
        for(i = 1; i  < nums.size(); i++){
            maxdiff = max(nums[i] - nums[i - 1],maxdiff);
        }
        return maxdiff;
    }
};