class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        bool res[3] = {};
        for(auto &triplet:triplets){
            if(triplet[0]<= target[0] && triplet[1]<= target[1] &&triplet[2]<= target[2] ){
                res[0] |= triplet[0] == target[0];
                res[1] |= triplet[1] == target[1];
                res[2] |= triplet[2] == target[2];
            }
        }
        return res[0] && res[1] && res[2];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna