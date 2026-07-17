class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mpp;
        vector<int> arr;
        for(int i = 0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto it: mpp){
            int count = it.second;
            if(count>2){
                count = 2;
            }
        for(int i = 0;i<count;i++){
           arr.push_back(it.first); 
           
        }
        }
        nums = arr;
        return nums.size();
    }
};
