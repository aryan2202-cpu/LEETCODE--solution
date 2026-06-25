class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int original = x;
        while(x!=0){
            int ld = x%10;
            x = x/10;
            sum = sum + ld;
        }
        if(original%sum==0){
            return sum;
        }
return -1;
    }
};
