class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
       int n = nums.size();
       int l = 0,r=0,count=0,ans=0;
       while(r<n){
       if(nums[r]%2!=0){
       count++;
       } 
       while(count>k){
        if (nums[l] % 2 != 0) count--;
            l++;
       }
       if (count == k) {
            int l2 = l, extra = 0;
            while (l2 <= r && nums[l2] % 2 == 0) { l2++; extra++; }
            ans += extra + 1;             
        }
       r++;
       }
       return ans;
    }
};
