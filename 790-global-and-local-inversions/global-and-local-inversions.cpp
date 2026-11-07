class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(i == nums[i]) continue;
            else if(1 == abs(nums[i]-i)) continue;
            else 
               return false;
        }        
        return true;
    }
};