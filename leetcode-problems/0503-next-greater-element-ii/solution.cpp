class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr;
        for(int i = 0;i<n;i++){
            int count = 0;
            bool found = false;
            int j = (i+1)%n;
            while(count<n){
                if(nums[i]<nums[j]) {
                    arr.push_back(nums[j]);
                    found = true;
                    break;
                }
                if(j==n-1) j=0;
                else j++;
                count++;
            }
            if(!found) arr.push_back(-1);
        }
        return arr;
    }
};
