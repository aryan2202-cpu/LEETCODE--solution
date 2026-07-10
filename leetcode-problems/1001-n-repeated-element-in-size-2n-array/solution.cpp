class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int m = nums.size();
        int n = m/2;
        int i = 0;
        int count = 0;
        int j = 1;

        while(i < m - 1){         
            if(nums[i] == nums[j]){
                return nums[i];    
            }
            i++;
            j++;
        }
        return nums[i];
    }
};
