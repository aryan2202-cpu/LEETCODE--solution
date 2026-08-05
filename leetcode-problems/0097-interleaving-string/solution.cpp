class Solution {
public:
    int memo[101][101];
    bool solve(string& s1, string& s2, string& s3, int i, int j, int k) {
        if (k == s3.length()) return (i == s1.length() && j == s2.length());
        if (memo[i][j]!= -1) return memo[i][j];
        bool takeS1 = false, takeS2 = false;
        if (i <s1.length() && s1[i]==s3[k]) {
            takeS1 = solve(s1,s2,s3,i+ 1,j,k+ 1);
        }
        if (!takeS1 && j < s2.length() && s2[j] == s3[k]) {
            takeS2 = solve(s1,s2,s3,i,j+1,k + 1);
        }
        return memo[i][j]=(takeS1||takeS2);
    }
    bool isInterleave(string s1, string s2, string s3) {
        int n1 = s1.length(), n2 = s2.length(), n3 = s3.length();
        if (n1+n2!=n3) return false;
        memset(memo,-1,sizeof(memo));
        return solve(s1,s2,s3,0,0,0);
    }
};
