class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        
        for(int i = 0; i < s.length(); i++) {
            // Get value of current character
            int currentVal = 0;
            if(s[i] == 'I') currentVal = 1;
            else if(s[i] == 'V') currentVal = 5;
            else if(s[i] == 'X') currentVal = 10;
            else if(s[i] == 'L') currentVal = 50;
            else if(s[i] == 'C') currentVal = 100;
            else if(s[i] == 'D') currentVal = 500;
            else if(s[i] == 'M') currentVal = 1000;
            
            // Get value of next character (if exists)
            int nextVal = 0;
            if(i + 1 < s.length()) {
                if(s[i+1] == 'I') nextVal = 1;
                else if(s[i+1] == 'V') nextVal = 5;
                else if(s[i+1] == 'X') nextVal = 10;
                else if(s[i+1] == 'L') nextVal = 50;
                else if(s[i+1] == 'C') nextVal = 100;
                else if(s[i+1] == 'D') nextVal = 500;
                else if(s[i+1] == 'M') nextVal = 1000;
            }
            
            // Subtraction rule: if current < next, subtract; otherwise add
            if(currentVal < nextVal) {
                result -= currentVal;
            } else {
                result += currentVal;
            }
        }
        
        return result;
    }
};
