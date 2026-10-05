class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = indices.size();
        string ans(n,' ');
        int j = 0;
        while(j<n){
        ans[indices[j]] = s[j];
        j++;
        }
        return ans;
    }
};