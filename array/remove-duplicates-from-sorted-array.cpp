class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       if(nums.empty()) return 0;
        int org = 0, dup = 1, count = 1;
        while(dup < nums.size()) {
            if(nums[org] != nums[dup]) {
                org++;
                nums[org] = nums[dup];
                count++;
            }
            dup++;
        }
        return count;
    }
};