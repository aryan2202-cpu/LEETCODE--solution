class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int left = 0,right = n-1;
    while(left<=right){
       if(!isalnum(s[left])) {
                left = left + 1;
            } else if(!isalnum(s[right])) {
                right = right - 1;}
        else if(tolower(s[left])==tolower(s[right])){
            left = left + 1;
            right = right - 1;
        } else if(s.length()==0){
            return true;
        } else {
            return false;
        }
    }
    return true;
    }
};
