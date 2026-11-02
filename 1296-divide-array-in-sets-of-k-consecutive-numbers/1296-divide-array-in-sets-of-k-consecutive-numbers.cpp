class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
     if(nums.size()%k != 0)return false;
     map<int,int> hash;
     for(int num: nums)hash[num]++;
     for(auto &[start, freq]:hash){
        if(freq == 0)continue;
        for(int i = 1; i<k; i++){
            int next = start+i;
            if(hash[next] < freq)return false;
            hash[next] -= freq;
        }
        hash[start] = 0;
     }  
     return true;  
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna