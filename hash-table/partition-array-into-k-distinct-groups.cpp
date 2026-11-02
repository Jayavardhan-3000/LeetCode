class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(n%k) return false;
        unordered_map<int, int> mp;
        int maxi = 0;
        for(int x:nums) maxi = max(maxi,++mp[x]);
        return maxi<= n / k;
    }
};