class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr;
        int i = 0;
            while(i<n){
                int len = 0;
                while(i<n && nums[i]==1){
                len++;
                i++;
                }
            arr.push_back(len);  
            i++;
            }
            sort(arr.begin(),arr.end());
            int m = arr.size();
            return arr[m-1];
    }    
};
