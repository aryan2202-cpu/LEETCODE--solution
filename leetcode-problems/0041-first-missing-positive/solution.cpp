class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
     int n = nums.size();
     for(int i = 0;i<n;i++){
        if(nums[i]<=0){
         nums.erase(nums.begin()+i);
         n--;
         i--;
        }
     }
     sort(nums.begin(),nums.end());
     int ans = 0;
     int m = nums.size();
     if(m==0) return 1;
     if(nums[0]!=1) return 1;   
    for(int i = 0;i<m-1;i++){
        if(nums[i+1]-nums[i]==1 || nums[i+1]==nums[i])
        continue;
        else{   
       ans = nums[i]+1;
       break;
        }
    }
  if(ans==0) ans = nums[m-1]+1;
  return ans;
    }
};
