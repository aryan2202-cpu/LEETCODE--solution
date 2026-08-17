class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int start = 0;
        int end = 0;
        while(start<matrix.size()){
            if(matrix[start][end]==target){
            return true;
            break;
            }
            end++;
            if(end==matrix[0].size()){
                end=0;
                start++;
            }
        }
        return false;
    }
};
