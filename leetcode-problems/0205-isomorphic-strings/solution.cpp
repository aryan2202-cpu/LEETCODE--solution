class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;
        map<char,char> mpp;   
        map<char,char> mpp2;  
        for(int i = 0;i<s.length();i++){
            char a = s[i], b = t[i];
            if(mpp.count(a)&&mpp[a]!=b) return false;
            if(mpp2.count(b)&&mpp2[b]!= a) return false;
            mpp[a] =b;
            mpp2[b] = a;
        }
        return true;
    }
};
