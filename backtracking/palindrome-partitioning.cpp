class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        vector<vector<string>> res;
        backtrack(res, temp, s, 0);
        return res;
    }
    void backtrack(vector<vector<string>>& res, vector<string> &temp, string &s,int ind){
        if(ind == s.length()){
           res.push_back(temp);
           return;
        }
        for(int i = ind; i < s.length(); i++){
            if(palindrome(s, ind, i)){
                temp.push_back(s.substr(ind, i-ind+1));
                backtrack(res, temp, s, i+1);
                temp.pop_back();
            }
        }
    }
    bool palindrome(string &s, int left, int right){
        while(left<right){
            if(s[left] == s[right]){
                left++;
                right--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};