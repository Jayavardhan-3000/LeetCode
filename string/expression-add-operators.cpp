class Solution {
public:
    vector<string> addOperators(string num, int target) {
        vector<string> ans;
        backtrack(0,num,target,0,0,"",ans);
        return ans;
    }
    void backtrack(int i, string &s, int target,long res, long prev, string path, vector<string> &ans) {
        if(i == s.length()){
            if(res==target) ans.push_back(path);
            return;
        }
        string numStr;
        long curr=0;
        for(int j=i;j<s.length(); j++) {
            if(j > i && s[i]=='0') break;
            numStr += s[j];
            curr=curr*10+(s[j]-'0');
            if(i==0){
                backtrack(j+1,s,target,curr,curr,numStr,ans);
            }else {
                backtrack(j+1,s,target,res+curr,curr,path+"+"+numStr,ans);
                backtrack(j + 1, s, target,res-curr,-curr,path + "-" + numStr,ans);
                backtrack(j+1,s,target,res-prev+prev*curr,prev*curr,path+"*"+numStr,ans);
            }
        }
    }
};