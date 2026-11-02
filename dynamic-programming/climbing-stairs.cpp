class Solution {
public:
    int climbStairs(int n) {
        int a=1,b=1,c;
        if(n<=1)return 1;
        for(int i = 0; i <= n-2;i++){
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
};