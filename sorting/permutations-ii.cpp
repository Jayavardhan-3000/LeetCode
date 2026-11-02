class Solution {
public:
    vector<vector<int>> result;  
      void permutation(vector<int> &nums,int i,int n){
        if(i==n){
            for(int j = 0; j < result.size(); j++){
                if(nums == result[j]) return;
            }
            result.push_back(nums);
            return ;
        }

        for(int j=i;j<=n;j++){
            swap( nums[i],nums[j]);
            permutation(nums,i+1,n);
            swap( nums[i],nums[j]);
        }
    }

     vector<vector<int>> permuteUnique(vector<int>& nums){
         permutation(nums,0,nums.size()-1);
        
        return result;
    }
};