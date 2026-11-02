class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        int i = 0;
        string current;
        string series[10] = {"", "","abc",  "def", "ghi",
                              "jkl", "mno", "pqrs", "tuv", "wxyz"};
        comb(digits,current, i, result, series);
        return result;
    }
    void comb(string digits,string &current, int i, vector<string>&result,string series[]){
        if(i >= digits.length()){
            result.push_back(current);
            return;
        }
        int num = digits[i]-'0';
        string value = series[num];
        for(int j = 0; j < value.length(); j++){
            current.push_back(value[j]);
            comb(digits, current, i+1, result, series);
            current.pop_back();

        }
    }
};