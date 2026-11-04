class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int finalavg = nums[nums.size()/2];
        int count = 0;
        int i = 0;
        while(i<nums.size()){
            if(nums[i]<finalavg){
                count += finalavg - nums[i];
            }
            if(nums[i]>finalavg){
                count += nums[i] - finalavg;
            }
            i++;
        }
        return count;
    }
};