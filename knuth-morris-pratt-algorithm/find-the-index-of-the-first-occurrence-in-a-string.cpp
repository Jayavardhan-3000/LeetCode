class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        if (m == 0) return 0;
        for (int i = 0; i <= n - m; i++) {
            int k = 0;
            while (k < m && haystack[i + k] == needle[k]) k++;
            if (k == m) return i;
        }
        return -1;
    }
};
