class Solution {
public:
    bool isPowerOfFour(int n) {
        for(long long i = 0;i<=62;i++){
             if(pow(4,i)==n){
                return true;
             }
        }
    return false;
    }
};
