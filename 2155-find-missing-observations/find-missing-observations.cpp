class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        vector<int> res;
        int total = (m + n) * mean;
        int sum = 0, nre;
        for(int no : rolls) {
            sum += no;
        }
        int rem = total - sum;
        if(rem > n * 6 || rem < n * 1) {
            return {};
        }
        while(n) {
            nre = rem / n;
            res.emplace_back(nre);
            rem -= nre;
            n--;
        }
        return res;
    }
};