class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
         unordered_map<int,vector<int>>mpp;
        for(int i = 0;i<nums.size();i++){
            mpp[nums[i]].push_back(i);
        }
        int count = 0;
        for(auto& it : mpp){
            vector<int>&arr1 = it.second;
            if(arr1.size()<3) continue;
            int diff = arr1[1] - arr1[0];
            bool check = false;
            for(int k = 1;k<arr1.size()-1;k++){
                if(arr1[k+1]-arr1[k] != diff){
                check = true;
                break;
                }
            }
            if(!check) count++;
        }    
        return count;
    }
};
