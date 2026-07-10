class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int start = 0 , end = 0;
        int count = 0;
        while(start<g.size() && end<s.size()){
            if(g[start]<=s[end]){
                start ++;
                end ++;
                count++;
            }else end++;
        }
        return count;
    }
};
