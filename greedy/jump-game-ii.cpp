class Solution {
public:
    int jump(vector<int>& nums) {
        int lb = 0, hb = 0, jump = 0;
        while(hb < nums.size()-1){
            int far = 0;
            for(int i = lb; i <= hb; i++){
                far = max(far, i + nums[i]);
            }
            lb = hb+1;
            hb = far;
            jump++;
        }
        return jump;
    }
};