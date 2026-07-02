#include<cmath>
#include<climits>
class Solution {
public:
    bool isPowerOfTwo(long long n) {
        for(long long i = 0;i<=62;i++){
             if(pow(2,i)==n){
                return true;
             }
        }
    return false;
    }
};
