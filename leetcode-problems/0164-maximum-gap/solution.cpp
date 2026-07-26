class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2) return 0;
        sort(nums.begin(),nums.end());
        vector<int> arr;
        for(int i = 1;i<nums.size();i++){
            arr.push_back(nums[i]-nums[i-1]);
        }
        int max = arr[0];
        for(int i = 0;i<arr.size();i++){
            if(arr[i]>max)
            max = arr[i];
        }
        return max;
    }
};
