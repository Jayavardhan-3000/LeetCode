class Solution {
public:
//identifiers 
vector<vector<string>> ans;
vector <string> temp;
//Base Case: Only add subsets that are Palindromes
bool palindrome(string s, int left, int right){
    while(left < right){
        if(s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}
void backtrack(string s, int start){
    //base case: We need to backtrack when we reached all elements
    if(start == s.size()){
        ans.push_back(temp);
        return;
    }
    //choices: We would look for all elements in order
    for(int i = start; i < s.size(); i++){
        //constraint: Verify for the current substring is palindrome
        if(!palindrome(s, start, i))continue;
        temp.push_back(s.substr(start, i - start + 1));
        backtrack(s,i+1);
        temp.pop_back();
    }
}
    vector<vector<string>> partition(string s) {
        backtrack(s,0);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna