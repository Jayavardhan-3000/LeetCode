class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int prev = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(prev == nums[i]) return nums[i];
            prev = nums[i];
        }
        return -1;
    }
};