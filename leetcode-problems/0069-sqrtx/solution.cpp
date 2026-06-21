#include<iostream>
#include<cmath>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
      int root = sqrt(x);
      if(root<0){
        root = -root;
      }
      if(root==0){
        return 0;
      }
      return root;
    }
};
