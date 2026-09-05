class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        if(nums.size()==0) return 0;
        if(nums.size()==1){
            if(0<=k)
            return 0;
            return -1;
        }
        int score = 0;
        int n = nums.size();
        int i = 0;
        vector<int> arr;
        vector<int>arr1;
        int j = 0;

        vector<int> suffixMin(n);
        suffixMin[n-1] = nums[n-1];
        for(int x = n-2; x >= 0; x--)
            suffixMin[x] = min(suffixMin[x+1], nums[x]);

        int runningMax = nums[0];
        while(i<n){
            arr.push_back(nums[i]);
            runningMax = max(runningMax, nums[i]);
            int minELE = suffixMin[i];
            int maxELE = runningMax;
            arr1.push_back(maxELE-minELE);
            i++;
            j++;
        }
        for(int i = 0;i<n;i++){
            if(arr1[i]<=k)
            return i;
        }
        return -1;
    }
};