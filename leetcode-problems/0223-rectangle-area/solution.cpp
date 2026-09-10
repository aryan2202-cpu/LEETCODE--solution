class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int L1, B1;
        if (ax1 < 0 || ax2 < 0) {
            L1 = abs(ax1 - ax2); 
        }
        else L1 = ax2 - ax1; 
        if (ay1 < 0 || ay2 < 0) {
            B1 = abs(ay1 - ay2);
        }
        else B1 = ay2 - ay1; 
        int area1 = abs(L1 * B1);
        int L2, B2;
        if (bx1 < 0 || bx2 < 0) {
            L2 = abs(bx1 - bx2);
        } 
        else L2 = bx2 - bx1;
        if (by1 < 0 || by2 < 0) {
            B2 = abs(by1 - by2);
        }
        else B2 = by2 - by1; 
        int area2 = abs(L2 * B2);
        bool intersect = false;
        if (max(ax1, bx1)<min(ax2, bx2)&& max(ay1, by1)<min(ay2, by2)) {
            intersect = true;
        }
        int L3 = 0, B3 = 0;
        if (intersect) { 
            L3 = min(ax2, bx2)-max(ax1, bx1);
            B3 = min(ay2, by2)-max(ay1, by1);
        }
        int intersectionArea =abs(L3 * B3);
        return area1 + area2 - intersectionArea; 
    }
};
