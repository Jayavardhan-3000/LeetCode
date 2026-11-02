class Solution {
public:
    int myAtoi(string s) {
     int i = 0, n = s.size(), sign = 1;
        long long sum = 0;

        while (i < n && s[i] == ' ') i++;

        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        while (i < n && isdigit(s[i])) {
            sum = sum * 10 + (s[i] - '0');
            if (sign == 1 && sum > INT_MAX) return INT_MAX;
            if (sign == -1 && -sum < INT_MIN) return INT_MIN;
            i++;
        }

        return sum * sign;
}
};