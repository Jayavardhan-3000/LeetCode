class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int f = 0;
        for (int l = 0; l < nums.size(); l++) {
            if (nums[l] != 0) {
                swap(nums[f], nums[l]);
                f++;
            }
        }
    }
};