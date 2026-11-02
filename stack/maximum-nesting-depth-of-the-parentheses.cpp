class Solution {
public:
    int maxDepth(string s) {
        int maximum = INT_MIN, current_max = 0, level = 0;
        for(char ch: s){
            if(ch == '('){
                level++;
                current_max = level;
                }
                else if(ch == ')'){
                     level--;
                }
                maximum = max(current_max, maximum);
            }
return maximum;
    }
};