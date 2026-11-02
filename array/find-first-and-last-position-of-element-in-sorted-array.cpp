class Solution {
public:
    int index(vector<int>& nums, int target, bool left) {
        int l = 0, r = nums.size() - 1, ans = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) {
                ans = mid;
                if (left) r = mid - 1;
                else l = mid + 1;
            } else if (nums[mid] < target) l = mid + 1;
            else r = mid - 1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {index(nums, target, true), index(nums, target, false)};
    }
};