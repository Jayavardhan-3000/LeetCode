class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int lvl = 0; 
        for(char ch:s){
            if(ch == '('){
                if(lvl > 0)
                result += ch;
                lvl++;
            }
            else{
                lvl--;
                if(lvl > 0)
                result+= ch;
            }
        }
        return result;
    }
};