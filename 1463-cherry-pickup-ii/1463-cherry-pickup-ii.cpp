class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(m,0));
        //Going from end to start as there are constraints on row 0, i,e; both robos start at 0 and m-1 respectively
        //base case: Initialize dp with the maximum cherries that could be obtained by two robos
        for(int j1 = 0; j1< m; j1++){
            for(int j2 = 0; j2 < m; j2++){
                if(j1 == j2)//Only one robo can pick if two were at same position
                dp[j1][j2] = grid[n-1][j1];
                else dp[j1][j2] = grid[n-1][j1] + grid[n-1][j2];
            }
        }
        //traversing back to the start
        for(int i = n-2; i >= 0; i--){
            vector<vector<int>> curr(m,vector<int>(m,0));
            for(int j1 = 0; j1 < m; j1++){
                for(int j2 = 0; j2 < m; j2++){
                    int cherries = grid[i][j1];
                    if(j1 != j2)
                    cherries += grid[i][j2];
                    int maxi = INT_MIN;
                    //we have 3x3 possibilities by the robos, need to find at which combination, we get the max cherries
                    for(int d1 = -1; d1 <= 1; d1++){//iterating through the possibilities
                        for(int d2 = -1; d2 <= 1; d2++){
                            //it just that they give cells at the instance, right and left, if now at 3, it gives 2 and 4 for L and R respectively.
                            int nj1 = j1+d1;
                            int nj2 = j2+d2;
                            if(nj1>= 0 && nj1 < m && nj2 >= 0 && nj2 < m){
                                maxi = max(maxi, dp[nj1][nj2]);//picking the best possibility
                            }
                        }
                    }
                    curr[j1][j2] = cherries + maxi;//add the best possibility to the current cherries
                }
            }
            dp = curr;
        }
        return dp[0][m-1];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna