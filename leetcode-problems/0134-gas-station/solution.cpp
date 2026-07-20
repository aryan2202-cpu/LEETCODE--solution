class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int m = gas.size();
        int n = cost.size();
        int start = 0;
        int total = 0;
        vector<int> unit;
        for (int i = 0; i < m; i++) {
            unit.push_back(gas[i]);
        }
        vector<int> LitreCost;
        for (int i = 0; i < n; i++) {
            LitreCost.push_back(cost[i]);
        }
        int k = 0;
        int l = 0;
        while (k < m && l < n) {
            total += unit[k] - LitreCost[l];
            if (total < 0) {
                start = k + 1;
                total = 0;
            }
            k++;
            l++;
        }
        k = start%m;
        l = start%n;
        int count = 0;
        int next = 0;
        while (count != m) {
            next += unit[k] - LitreCost[l];
            if (next < 0) {
                return -1;
            }
            k = (k + 1) % m;
            l = (l + 1) % n;
            count++;
        }

        return start%m;
    }
};
