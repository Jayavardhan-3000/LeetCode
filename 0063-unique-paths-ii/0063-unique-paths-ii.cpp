class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int n = grid.size();       
        int m = grid[0].size();    
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1){
                    grid[i][j] = 0;
                    continue;
                }
                if(i == 0 && j == 0){
                    grid[i][j] = 1;
                    continue;
                }
                int up = (i > 0) ? grid[i-1][j] : 0;
                int left = (j > 0) ? grid[i][j-1] : 0;
                grid[i][j] = up + left;
            }
        }
        return grid[n-1][m-1];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna