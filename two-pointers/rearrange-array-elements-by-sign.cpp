class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res(nums.size(),0);
        int posIndex = 0, oddIndex = 1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
                res[posIndex] = nums[i];
                posIndex += 2;
            }
            else{
                res[oddIndex] = nums[i];
                oddIndex += 2;
            }
        }
        return res;
    }
};