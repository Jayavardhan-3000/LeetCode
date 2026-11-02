class Solution {
public:
    int rotatedDigits(int n) {
   vector<int> change = {2, 5, 6, 9};
        vector<int> invalid = {3, 4, 7};
        int count = 0;

        for (int i = 1; i <= n; i++) {
            int num = i;
            bool valid = true;
            bool rotated = false;

            while (num) {
                int digit = num % 10;

                if (find(invalid.begin(), invalid.end(), digit) != invalid.end()) {
                    valid = false;
                    break;
                }

                if (find(change.begin(), change.end(), digit) != change.end()) {
                    rotated = true;
                }

                num /= 10;
            }

            if (valid && rotated) {
                count++;
            }
        }

        return count;
    }
};