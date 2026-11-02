class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sum = 0, sumo = 0;
        for(int i = 1; i <= n*2; i++){
            if(i % 2 == 0)sum += i;
            else sumo += i;
        }
        return gcd(sum,sumo);
    }
};