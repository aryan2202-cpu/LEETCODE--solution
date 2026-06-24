
        /*bool CheckifRotated(int nums,nums.size()){
        int count = 0;
        for(int i = 0;i<n-1;i++){ 
            for(int j = 1;j<n;j++){
            if(nums[j]>nums[i]){
                count++;
            }
            if(count == 0){
                return true;
            }
        }
        }
        return false;
    }
        int n = nums.size();  
        for(int i = 0;i<n-1;i++){
            for(int j = 1;j<n;j++){
           if(nums[i]>nums[j]){
            return false;
           }
        }
        }
        return true;
        CheckifRotated(nums,nums.size());
        return CheckifRotated;*/
        class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;  
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }
        return count <= 1;
    }
};

 //for the sorted and rotated array there would be exactly 1 drop. if count is 0 it means sorted and <=1 it means sorted and rotated
