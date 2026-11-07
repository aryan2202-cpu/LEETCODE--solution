#include<bits/stdc++.h>
class Solution {
public:
    int arrangeCoins(int n) {
    int count = 0;
    if(n==1) return 1;
    for(int i = 1;i<=n;i++){
        n = n-i;
        if(n<0){
            return count;
        }
        count++;
        if(n==0) return count;
    }
    return count;
    }
};