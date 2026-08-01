class Solution {
public:
    vector<vector<int>> matrix;

    void fillRing(int top, int left, int bottom, int right, int &val){
        if(top > bottom || left > right) return;

        for(int i = left; i<=right; i++){
            matrix[top][i] =val++;
        }
        for(int i = top+1; i <= bottom; i++){
            matrix[i][right] =val++;
        }
        if(top <bottom&&left < right){
            for(int i = right-1; i>=left;i--){
                matrix[bottom][i] = val++;
            }
            for(int i = bottom-1;i>top;i--){
                matrix[i][left] = val++;
            }
        }
        fillRing(top+1,left+1,bottom-1,right-1, val);
    }

    vector<vector<int>> generateMatrix(int n) {
        matrix = vector<vector<int>>(n, vector<int>(n));
        int val = 1;
        fillRing(0,0,n-1,n-1,val);
        return matrix;
    }
};
