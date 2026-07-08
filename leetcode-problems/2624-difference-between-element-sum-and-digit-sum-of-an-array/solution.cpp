class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0;i<n;i++){ // element sum
            sum = sum + nums[i];
        }
      int digitSum = 0;
      int i = 0;
    for(int i = 0;i<n;i++){
        while(nums[i]>9){
            int ld = nums[i]%10;
            digitSum = digitSum + ld;
            nums[i]=nums[i]/10;
        }
    }
    for(int i = 0;i<n;i++){
        digitSum = digitSum + nums[i];
    }
      return (sum-digitSum);
    }
};
