class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n = nums.size();
        string ans = "";
        vector<string> strs;
        for (int i = 0; i < n; i++) strs.push_back(to_string(nums[i]));
        int start = 0;
        while (start< strs.size()) {
            int maxIdx = 0;
            for (int i = 1;i<strs.size(); i++) {
                if (strs[i] + strs[maxIdx] > strs[maxIdx] + strs[i]) maxIdx = i;
            }
            ans +=strs[maxIdx];
            strs.erase(strs.begin() + maxIdx);
        }
        if(ans[0] == '0') return "0";
        return ans;
    }
};
