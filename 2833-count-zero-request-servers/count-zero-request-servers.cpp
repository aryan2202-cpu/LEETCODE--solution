class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        vector<vector<int>> TimeInterval;
        for(int i = 0;i<queries.size();i++){
            TimeInterval.push_back({queries[i]-x,queries[i],i});
        }
        sort(TimeInterval.begin(),TimeInterval.end());
        multimap<int,int>mpp;
        for(int i = 0;i<logs.size();i++){
            mpp.insert({logs[i][1],logs[i][0]});
        }
        vector<int>ans(queries.size());
        vector<int> cnt(n+1,0);
        int cur = n;
        auto L = mpp.begin();
        auto R = mpp.begin();
        for(int i = 0;i<TimeInterval.size();i++){
            while(R != mpp.end() && R->first <= TimeInterval[i][1]){
                if(cnt[R->second]==0) cur=cur-1;
                cnt[R->second]++;
                R++;
            }
            while(L != R && L->first < TimeInterval[i][0]){
                cnt[L->second]--;
                if(cnt[L->second]==0) cur=cur+1;
                L++;
            }
            ans[TimeInterval[i][2]] = cur;
        }
        return ans;
    }
};