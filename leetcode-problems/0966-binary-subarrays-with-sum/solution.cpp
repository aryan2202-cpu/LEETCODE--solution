class Solution {
public:
    int atMost(vector<int>& nums, int goal) {
      if (goal < 0) return 0; 
        int n = nums.size();
        int count = 0;
        int i = 0;       
        long long sum = 0;
        for (int j = 0; j < n; j++) {  
            sum += nums[j];     
            while (sum > goal) {
                sum -= nums[i];
                i++;
            }   
            count += (j - i + 1);
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums, goal) - atMost(nums, goal - 1);
    }

};
