class Solution {
public:
    bool isPalindrome(int x) {
        // Edge case 1: Negative numbers are not palindromes
        if (x < 0) return false;
        
        // Edge case 2: Numbers ending with 0 (except 0 itself) are not palindromes
        if (x % 10 == 0 && x != 0) return false;
        
        int reversed_number = 0;
        
        // Reverse only half of the number to avoid overflow
        while (x > reversed_number) {
            reversed_number = reversed_number * 10 + x % 10;
            x /= 10;
        }
        
        // For even digits: x == reversed_number
        // For odd digits: x == reversed_number / 10 (middle digit doesn't matter)
        return x == reversed_number || x == reversed_number / 10;
    }
};
