class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> right(n,1);
        for(int j = 1; j < m; j++){
        for(int i = 1; i < n; i++)
        right[i] = right[i]+right[i-1];
        }
    return right[n-1];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna