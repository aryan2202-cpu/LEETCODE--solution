class Solution {
public:
    bool isSubsequence(string s, string t) {
       string newArr = "";
        int m = s.size();
        int n = t.size();
        int i = 0 ;
         int j = 0;
            while(i<m && j<n){
                if(s[i]==t[j]){
            newArr.push_back(s[i]);
            i++;
            }
            j++;
            }
     if(newArr == s) return true;
     return false;
    }
};
