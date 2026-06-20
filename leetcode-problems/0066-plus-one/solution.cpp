class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // 1. Loop backwards from the last digit
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;     // No carry needed, just add 1
                return digits;   // Return immediately!
            }
            digits[i] = 0;       // 9 becomes 0, loop continues left (carry)
        }
        
        // 2. If all digits were 9 (e.g., [9,9] -> [0,0]), insert 1 at the front
        digits.insert(digits.begin(), 1); 
        return digits;
    }
};

