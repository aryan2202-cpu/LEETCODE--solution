class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int largest = 0;
        int smallest  = 0;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<k;i++){
        smallest = smallest + nums[i];
        largest = largest + nums[nums.size()-i-1];
        }
        return abs(largest-smallest);
    }
};
