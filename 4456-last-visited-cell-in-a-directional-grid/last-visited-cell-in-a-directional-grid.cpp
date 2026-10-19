class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();        
        int r = 0, c = 0;
        vector<int> arr = {0, 0};
        while (r >= 0 && r < m && c >= 0 && c < n) {
            arr[0] = r;
            arr[1] = c;
            char dir = grid[r][c];
            grid[r][c] = '#'; 
            int nr = r;
            int nc = c;
            if (dir == 'R') nc++;
            else if (dir == 'L') nc--;
            else if (dir == 'U') nr--;
            else if (dir == 'D') nr++;
            if (nr < 0 || nr >= m || nc < 0 || nc >= n || grid[nr][nc] == '#') {
                break;
            }
            r = nr;
            c = nc;
        }
        return arr;
    }
};