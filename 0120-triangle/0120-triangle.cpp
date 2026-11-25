class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int> temp;
        temp = triangle[0];
        for(int i = 1; i < n; i++){
            vector<int> curr(i+1,0);
            for(int j = 0; j < i+1; j++){
                int best = INT_MAX;
                if(j < i)
                    best = min(best, temp[j]);
                if(j > 0)
                    best = min(best, temp[j-1]);
                curr[j] = triangle[i][j] + best;
        }
        temp = curr;
        }
        return *min_element(temp.begin(), temp.begin()+n);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna