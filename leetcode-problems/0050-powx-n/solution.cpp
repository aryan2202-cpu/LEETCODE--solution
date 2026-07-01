#include<cmath>
class Solution {
public:
    double myPow(double x, long n) {
      double result;
      if(n==0){
        return 1;
      }     
      else if(n==1){
        return x;
      }
      else if(x==1){
        return 1;
      }
      else if(n<0) {
        n=-n;
        result = pow(x,n);
        result = 1/result;
      }else{
        result = pow(x,n);
      }
      return result;
    }
};
