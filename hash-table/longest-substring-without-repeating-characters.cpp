class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int  n = s.length();
    unordered_set <char> seen;
    int start = 0, end = 0, maxlen = 0;
    while(end < s.length()){
        if(seen.find(s[end]) == seen.end()){
            seen.insert(s[end]);
            maxlen = max(maxlen, end - start + 1);
            end++;}
            else{
                seen.erase(s[start]);
                start++;
            }
    }
    return maxlen;
}
};