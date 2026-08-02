class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1="";
        string str2="";
        int i=0;
        while(i<word1.size()){
            str1+=word1[i];
            i++;
        }
        i=0;
        while(i<word2.size()){
            str2+=word2[i];
            i++;
        }
        if(str1==str2) return true;
        else return false;
    }
};
