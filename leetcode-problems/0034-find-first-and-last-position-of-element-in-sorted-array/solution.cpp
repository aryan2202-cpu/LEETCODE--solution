class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> arr(2, -1);
        bool found = false;
        int low = 0, high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                arr[0] = mid;
                found = true;
                high = mid-1;   
            }
            else if(target>nums[mid]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        if(!found) return {-1,-1};
        low = 0; high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                arr[1] = mid;
                low = mid+1;   
            }
            else if(target>nums[mid]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }

        return arr;
    }
};
