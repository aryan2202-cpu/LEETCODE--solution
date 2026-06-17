#include <climits>

class Solution {
public:
    int reverse(int x) {
        long long reverseNum = 0;
        
        while (x != 0) {
            int ld = x % 10;
            reverseNum = (reverseNum * 10) + ld; 
            x = x / 10;
        }
        
        
        if (reverseNum > INT_MAX || reverseNum < INT_MIN) {
            return 0;
        }
        
        return (int)reverseNum;
    }
};

