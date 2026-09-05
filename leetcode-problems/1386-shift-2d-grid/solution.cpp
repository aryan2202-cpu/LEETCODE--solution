class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        while(count<k){
            vector<vector<int>>arr = grid;
            for(int i = 0;i<m;i++){
                for(int j = 0;j<n;j++){
                    if(j+1<n){
                        arr[i][j+1] = grid[i][j];
                    }
                    else if(i+1<m){
                        arr[i+1][0] = grid[i][j];
                    }
                    else{
                        arr[0][0] = grid[i][j];
                    }
                }
            }
            grid=arr;
            count++;
        }
        return grid;
    }
};
