class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<int> temp = matrix[0];
        for(int i = 1; i < n; i++) {
            vector<int> curr(n, 0);
            for(int j = 0; j < n;j++) {
                int best = temp[j];
                    if(j > 0){
                    best = min(best, temp[j-1]);
                    }
                if(j < n-1){
                    best = min(best, temp[j+1]);
                }
                curr[j] = matrix[i][j] + best;
            }
            temp = curr;
        }
        return *min_element(temp.begin(), temp.end());
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna