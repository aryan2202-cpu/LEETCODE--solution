class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<int> ans = triangle[triangle.size()-1];
        for(int i = triangle.size()-2; i >= 0; i--){
            for(int j = 0; j <= i; j++){
                ans[j] = triangle[i][j] + min(ans[j], ans[j+1]);
            }
        }
        return ans[0];
    }
};
