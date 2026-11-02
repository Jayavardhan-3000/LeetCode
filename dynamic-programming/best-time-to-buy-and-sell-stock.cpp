class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curr = 0, maxi = 0;
        for(int i = 1; i < prices.size(); i++){
            curr = max(0, curr += prices[i] - prices[i-1]);
            maxi = max(curr, maxi);
        }
        return maxi;
    }
};