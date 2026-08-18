class Solution {
public:
    string addStrings(string num1, string num2) {
        string s = "";
        int i = num1.size()-1;
        int j = num2.size()-1;
        int carry = 0;
        int sum = 0;
        while(i>=0 || j>=0){
            sum = carry;
            if(i>=0) sum += num1[i]-'0';
            if(j>=0) sum += num2[j]-'0';

            if(sum<10){
                s = s + char(sum+'0');
                carry = 0;
            }

            int newSum = sum;
            int rev = 0;
            if(sum>=10 && sum<100){
                int ld = sum%10;
                rev = rev*10+ld;
                s = s + char(ld+'0');
                sum = sum/10;
                carry = sum;   
            }
            rev = rev%10;
            i--;
            j--;
        }
        if(carry) s = s + char(carry+'0');
        reverse(s.begin(), s.end());
        return s;
    }
};
