class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        if (s1 == s2) return true;
        for (int i = 0; i<(int)s1.size()-2;i++) {
            int j = i + 2;
            if (s1[i] == s2[i]) continue;
            swap(s1[i],s1[j]);
            if (s1==s2) return true;
        }
        return false;
    }
};
