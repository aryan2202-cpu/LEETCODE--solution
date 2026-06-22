#include<algorithm>
#include<climits>

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ultimateMax = INT_MIN; 
        int maxSum = 0; 
        
        int n = nums.size();
        for(int i = 0; i < n; i++){ 
            maxSum = maxSum + nums[i];

            if (maxSum > ultimateMax) {
                ultimateMax = maxSum;
            }
            if (maxSum < 0) {
                maxSum = 0;
            }
        }
        
        return ultimateMax;
    }
};

