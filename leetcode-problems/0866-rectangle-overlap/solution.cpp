#include<cmath>
class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int m = rec1.size();
        int n = rec2.size();
        int leftX = max(rec1[m-4],rec2[n-4]);   
        int rightX = min(rec1[m-2],rec2[n-2]);   
        int botY = max(rec1[m-3],rec2[n-3]);   
        int topY = min(rec1[m-1],rec2[n-1]);  
        if (leftX<rightX && botY<topY) return true;
        return false;
    }
};
