class Solution {
public:
    double myPow(double x, int n) {
        long long pow = n;
        if (pow == 0) return 1;
        int flag = 0;
        if (pow < 0) {
            flag = 1;
            pow = -pow;
        }
        double y = 1;
        while (pow > 0) {
            if (pow % 2 == 1) y *= x;
            x *= x;
            pow /= 2;
        }
        if (flag) return 1 / y;
        else return y;
    }
};