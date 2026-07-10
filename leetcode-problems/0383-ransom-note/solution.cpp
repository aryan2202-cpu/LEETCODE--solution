class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(magazine.begin(),magazine.end());
        sort(ransomNote.begin(),ransomNote.end());
        int i = 0;
        int  j = 0;
        int m = ransomNote.size();
        int n = magazine.size();
        while(i<m && j<n){
            if(magazine[j]==ransomNote[i]) {
                i++;
                j++; 
            }
            else
            j++;
        }
        if(i==m){
            return true;
        }
        return false;
    }
};
