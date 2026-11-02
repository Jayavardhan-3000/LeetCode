class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string w,r;
        while(ss>>w)r= w+" "+r;
        return r.substr(0,r.size() -1);
    }
};