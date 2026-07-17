class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        int m = nums1.size();
        int n = nums2.size();
        int start = 0;
        int end = 0;
        while(start<m && end<n){
           if(m==1 || n==1){
                if(m==1){
                    arr.push_back(nums1[start]);
                    start++;
                }
                if(n==1){
                    arr.push_back(nums2[end]);
                    end++;
                }
            }
            else{
            arr.push_back(nums1[start]);
            arr.push_back(nums2[end]);
            start++;
            end++;
            }
        }
        while(start<m){
            arr.push_back(nums1[start]);
            start++;
        }
        while(end<n){
            arr.push_back(nums2[end]);
            end++;
        }
        double med;
        int o = arr.size();
        sort(arr.begin(),arr.end());
        if(arr.size()%2!=0) med = arr[o/2];
        else med = (arr[o/2] + arr[(o/2)-1])/2.0;
        return med;
    }
};
