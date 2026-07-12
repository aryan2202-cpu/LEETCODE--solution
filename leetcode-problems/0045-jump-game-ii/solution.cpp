class Solution {
public:
    int jump(vector<int>& nums) {
        int left = 0, right = 0;
        int jumps = 0;
        while (right < nums.size() - 1) { 
            int rangemax = 0;
            for (int i = left; i <= right; i++) { 
                rangemax = max(rangemax, i + nums[i]);
            }
            left = right + 1;
            right = rangemax;
            jumps++;
        }
        return jumps;
    }
};
