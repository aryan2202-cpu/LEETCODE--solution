class Solution {
public:
    int mirrorDistance(int n) {
        int sum=0;
        int k=n;
        while(n>0){
            int lastdigit=n%10;
            sum=sum*10+lastdigit;
            n=n/10;
        }
        int ans = abs(sum-k);
        return ans;
        
    }
};
