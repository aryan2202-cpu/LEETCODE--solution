class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        for(int i = 0;i<nums1.size();i++){
            for(int j = 0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    arr.push_back(nums1[i]);
                }
            }
        }
        sort(arr.begin(),arr.end());
        arr.erase(unique(arr.begin(), arr.end()), arr.end());
        return arr;
    }
};
