class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();
        vector<vector<int>> ans;
        int j = 0;
        while(j<m){
            int i = m-1;
             vector<int>arr;
             while(i>=0){
            arr.push_back(matrix[i][j]);
            i--;
             }
            if(arr.size()==m){
                ans.push_back(arr);
                j++;
            }
        }
        matrix  = ans;

      
    }
};
