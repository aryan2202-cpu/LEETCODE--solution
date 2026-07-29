class Solution {
public:
    int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1) return INT_MAX;
    long long count = 0;
        int sign = 1;
    if (dividend < 0 && divisor > 0) {
        sign = -1;
    } else if (dividend > 0 && divisor < 0) {
        sign = -1;
    }

            if (divisor > 0 && dividend > 0) {
          while (dividend >= divisor) {
              long long shift = 0;
              while (dividend >= (divisor << (shift + 1)) && (divisor << (shift + 1)) > 0) {
                  shift++;
              }
              dividend -= (divisor << shift);
              count += (1LL << shift);
          }
      }

     if(divisor< 0||dividend<0){
            if (divisor < 0 || dividend < 0) {
          long long absolute_dividend = abs((long long)dividend);
          long long absolute_divisor = abs((long long)divisor);
          while (absolute_dividend >= absolute_divisor) {
              long long shift = 0;
              while (absolute_dividend >= (absolute_divisor << (shift + 1)) && (absolute_divisor << (shift + 1)) > 0) {
                  shift++;
              }
              absolute_dividend -= (absolute_divisor << shift);
              count += (1LL << shift);
          }
      }

      }
            if (sign == -1) {
            return -count;
        }
         return count;

      }
     
    };
