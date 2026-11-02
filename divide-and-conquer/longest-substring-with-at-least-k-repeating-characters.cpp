class Solution {
public:
    int longestSubstring(string s, int k) {
     if (s.size() == 0) return 0;

        // 1. Count frequency of all characters
        unordered_map<char, int> freq;
        for (char c : s) freq[c]++;

        // 2. Check for any character with freq < k
        for (int i = 0; i < s.size(); i++) {
            if (freq[s[i]] < k) {
                // 3. Split string at this invalid character and solve both parts
                int left = longestSubstring(s.substr(0, i), k);
                int right = longestSubstring(s.substr(i + 1), k);

                // 4. Return the longer one
                return max(left, right);
            }
        }

        // 5. If no invalid character found, whole string is valid
        return s.size();
    }
};