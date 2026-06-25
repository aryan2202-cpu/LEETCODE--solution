class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sumDigits = 0;
        for(int i = 1;i<num;i++){
            if(num%i==0){
            sumDigits = sumDigits + i;
            }
        }
        if(sumDigits==num){
            return true;
        }
        return false;
    }
};
