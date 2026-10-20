class Solution {
public:
    int hammingWeight(int n) {
       string res = "";
        while(n!=1){
            if(n%2==1) res += '1';
            else res += '0';
            n = n /2;
        }
        reverse(res.begin(),res.end());
        int count = 1;
        for(int i = 0;i<res.length();i++){
            if(res[i]=='1') count++;
        }
        return count;
    }
};