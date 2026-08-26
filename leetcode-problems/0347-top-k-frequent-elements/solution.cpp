class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size()==1) return nums;
        map<int,int> mpp;
        for(int i = 0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<int>arr;
        for(auto it: mpp){
            arr.push_back(it.second);
        }
        sort(arr.begin(),arr.end());
        vector<int>arr2;
        int i = arr.size()-1;
        while(i>=0){
            if(k==0) break;
            arr2.push_back(arr[i]);
            k--;
            i--;
        }
       vector<int> arr3;
       for(int i = 0;i<arr2.size();i++){
        for(auto it: mpp){
           if(it.second==arr2[i] && find(arr3.begin(),arr3.end(),it.first)==arr3.end()){
arr3.push_back(it.first);
break;
}
        }
       }
        return arr3;
    }
};
