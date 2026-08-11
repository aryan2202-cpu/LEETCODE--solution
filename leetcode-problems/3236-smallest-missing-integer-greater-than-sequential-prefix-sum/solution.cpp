class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr;
        arr.push_back(nums[0]);
        for(int i = 0;i<n-1;i++){
            if(nums[i]+1 == nums[i+1]){
            arr.push_back(nums[i+1]);
            }
            if(nums[i]+1 != nums[i+1]){
            break;
            }
        }
        int sum = 0;
        for(int i = 0;i<arr.size();i++){
            sum = sum + arr[i];
        }
        sort(nums.begin(),nums.end());
        for(int i = 1;i<2502;i++){
            if(i>=sum && !binary_search(nums.begin(), nums.end(), i))
            return i;
        }
        return 0;
    }
};
