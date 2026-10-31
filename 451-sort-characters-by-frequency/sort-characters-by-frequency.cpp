class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mpp;
        int n = s.size();
        for(int i = 0; i < n; i++) {
            mpp[s[i]]++;
        } 
        vector<int> freq;
        for(auto it : mpp) {
            freq.push_back(it.second);
        }
        sort(freq.begin(), freq.end(), greater<int>());
        string ans = "";
        for(int i = 0; i < freq.size(); i++) {
            for(auto it : mpp) {
                if(freq[i] == it.second) {
                    ans.append(it.second, it.first);
                    mpp.erase(it.first); 
                    break;
                }
            }
        }
        return ans;
    }
};