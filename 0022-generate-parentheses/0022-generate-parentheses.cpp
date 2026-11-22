class Solution {
public:
vector<string> ans;
string temp;
void backtrack(int open , int close, int n){
    //base case
    if(temp.size() == 2*n){
        ans.push_back(temp);
        return;
    }
    //choices 
    //Choice 1 : We have to choose '('
    if(open < n){//We push n number of open parenthesis
        temp.push_back('(');
        backtrack(open+1, close, n);
        temp.pop_back();
    }
    //Choice 2: We have to choose ')'
    if(close < open){//We push close parenthesis in accordance with the no.of '('
        temp.push_back(')');
        backtrack(open, close+1, n);
        temp.pop_back();
    }
} 
    vector<string> generateParenthesis(int n) {
        backtrack(0, 0, n);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna