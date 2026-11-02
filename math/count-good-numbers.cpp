class Solution {
public:
    int countGoodNumbers(long long n) {
        const int MOD = 1'000'000'007;
        long long even = (n / 2) + (n & 1), odd = n / 2;
        int sum = (1LL* power(5, even) * power(4, odd))%MOD;
        return sum;
    }
    int power(int x, long long pow) {
        int y = 1;
        const int MOD = 1'000'000'007;
        while (pow > 0) {
            if (pow % 2 == 1)
                y = (1LL* y * x) % MOD;
            x = (1LL * x * x) % MOD;
            pow /= 2;
        }
        return y;
    }
};