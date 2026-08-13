class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr;
        if(nums.size()==0) 
        return 0;
        if(nums.size()==1)
        return 1;
        sort(nums.begin(),nums.end());
        set<int>st;
        for(int i = 0;i<n;i++){
            st.insert(nums[i]);
        }
        vector<int> nums1;
        for(auto val : st){
            nums1.push_back(val);
        }
        int m = nums1.size();
        sort(nums1.begin(),nums1.end());
        if(m==1) return 1;
        int i = 1;
        while(i<m){
            int count = 0;
        while(i<m && nums1[i]-nums1[i-1]==1){ 
            count++;
            i++;
            if(i<m && nums1[i]-nums1[i-1]!=1)
            break;
        }    
        arr.push_back(count);
        i++;
        }
        sort(arr.begin(),arr.end());
        int mAx = arr[arr.size()-1];
        return mAx+1;
        }
};
