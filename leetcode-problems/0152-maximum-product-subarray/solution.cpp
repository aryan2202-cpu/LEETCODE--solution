class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        long long maxPro = nums[0];
        for( int i = 0;i<n;i++){
            long long pro = 1;
            for( int j = i;j<n;j++){
                 pro = pro*nums[j];
                    if(pro>maxPro){
                        maxPro = pro;
                    }
            }

        }
        return (int)maxPro;
        
    }
};
