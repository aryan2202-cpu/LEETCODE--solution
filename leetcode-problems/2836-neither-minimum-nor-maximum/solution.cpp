class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++){
        if(nums[i]==nums[0]){
            continue;
        }    
        else if(nums[i]==nums[nums.size()-1]){
            continue;
        }
        else return nums[i];   
        }
        if(nums.size()==2 || nums.size()==1 || nums.size()==0){
            return -1;
        }
        return 0;
    }
};
