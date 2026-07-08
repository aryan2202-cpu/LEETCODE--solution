class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       vector<int> arr;
        for(int i = 0;i<nums1.size();i++){
            for(int j = 0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    arr.push_back(nums1[i]);
                    nums2.erase(nums2.begin() + j); 
                    nums1.erase(nums1.begin() + i);
                    i--;
                    break;
                }
            }
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
};
