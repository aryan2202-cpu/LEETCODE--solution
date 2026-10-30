class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        int first = 0, second = 0, money;
        for(int i=0; i<n-1; i++){          
            money = max(second, first + nums[i]);
            first = second;
            second = money;
        }
        int ans = second;
        first = 0; second = 0;
        for(int i=1; i<n; i++){           
            money = max(second, first + nums[i]);
            first = second;
            second = money;
        }
        return max(ans, second);
    }
};