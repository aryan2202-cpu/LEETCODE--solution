class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.size(), n = t.size();
        if(n>m) return "";
        int need[128] = {0};
        for(int i=0;i<n;i++) need[t[i]]++;
        int start=0, missing=n, bestLen=INT_MAX, bestStart=0;
        for(int end=0; end<m; end++){
            if(need[s[end]]-- > 0) missing--;
            while(missing==0){
                if(end-start+1 < bestLen){
                    bestLen = end-start+1;
                    bestStart = start;
                }
                if(++need[s[start]] > 0) missing++;
                start++;
            }
        }
        return bestLen==INT_MAX ? "" : s.substr(bestStart, bestLen);
    }
};
