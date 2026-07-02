class Solution {
public:
    bool isPowerOfThree(int n) {
        for(long long i = 0;i<=62;i++){
             if(pow(3,i)==n){
                return true;
             }
        }
    return false;
    }
};
