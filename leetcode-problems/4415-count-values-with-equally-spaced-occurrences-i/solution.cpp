class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        map<int,int>mpp;
        for(int i = 0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<int>arr;
        for(auto it: mpp){
            if(it.second==3) arr.push_back(it.first);
        }
        if(arr.size()==0) return 0;
        //arr = [1,5]
        int count = 0;
        for(int i = 0;i<arr.size();i++){
            vector<int>arr1;
            for(int j = 0;j<nums.size();j++){
                if(arr[i]==nums[j])
                arr1.push_back(j);
            }
           if(arr1[1]-arr1[0] == arr1[2] - arr1[1])
           count++;
        }
        return count;
    }
};
