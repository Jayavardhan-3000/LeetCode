class Solution {
public:
    int candy(vector<int>& ratings) {
        int count = 0, n = ratings.size();
        vector<int>candy(n,1);
        for(int i = 1 ; i < n; i++)
        if(ratings[i] > ratings[i-1])
        candy[i] = candy[i-1]+1;
        for(int i = n - 1; i > 0; i--){
            if(ratings[i-1] > ratings[i])
            candy[i-1] = max(candy[i] + 1, candy[i-1]);
            count += candy[i-1];
        }
        return candy[n-1]+count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna