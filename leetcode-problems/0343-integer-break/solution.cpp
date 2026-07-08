class Solution {
public:
    int integerBreak(int n) {
        int maxPro = 1;
        for (int k = 1; k < n; k++) {
            int sum = 0;
            int Pro = 1;
            int count = 0;
            while (sum + k <= n) {
                sum += k;
                Pro *= k;
                count++;
            }
            int remainder = n - sum;

            if (remainder > 0) {
                if (count == 1) {
                    Pro = k * remainder;
                } else {
                    int merged = (Pro / k) * (k + remainder);
                    int separate = Pro * remainder;
                    Pro = max(merged, separate);
                }
            } else if (count == 1) {
                continue;
            }

            maxPro = max(maxPro, Pro);
        }
        return maxPro;
    }
};
