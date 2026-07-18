class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prod = 1;
       vector<int> arr;
       for(int i=0;i<n;i++){
           prod = prod *nums[i];
       }
       int newP = prod;
       for(int i=0;i<n;i++){
           if(nums[i]!=0){
            newP = prod/nums[i];
           arr.push_back(newP);
           }
               if(nums[i]==0){
                int newProd = 1;
                for(int j=0;j<n;j++){
                    if(j!=i){
                        newProd = newProd*nums[j];
                    }
                }
                   arr.push_back(newProd);
               }                    
       }
       return arr;
    }
};
