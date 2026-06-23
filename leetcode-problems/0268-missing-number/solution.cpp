class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missingNo = -1; 
        int repeating;
        int n = nums.size();
        for( int i = 0;i<=n;i++){
        int count = 0;
        for ( int j = 0;j<n;j++){ 
            if(nums[j]==i){
                count++;
            } }
            if(count==2){
                repeating = i;
            }else if(count==0){
                missingNo = i;
            }
          }
        
        return missingNo;
    }
};
