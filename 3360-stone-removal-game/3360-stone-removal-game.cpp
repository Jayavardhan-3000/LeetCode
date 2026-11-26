class Solution {
public:
    bool canAliceWin(int n) {
        bool alice = true;
        for(int take = 10; take >= 1; take--) {
            if(n<take)return !alice;
            n -= take;
            alice= !alice;
        }
        return !alice;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna