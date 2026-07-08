#include<numeric>
class Solution {
public:
   long long prod(vector<int>& arr){
    int n = arr.size();
    long long product = 1;
    const long long LIMIT = 1000000000000000LL; 
    for(int i = 0; i < n; i++){
        if(product > LIMIT / arr[i]){  
            return LLONG_MAX;        
        }
        product = product * arr[i];
    }
    return product;
}
    long long lcmd(vector<int>& arr){
    long long i = 1;
    int n = arr.size();
    while(i < 1000000000LL){          
        bool isLCM = true;
        for(int j = 0; j < n; j++){
            if(i % arr[j] != 0){     
                isLCM = false;
                break;                
            }
        }
        if(isLCM){
            return i;                  
        }
        i++;
    }
    return i; 
}
    int findgcd(vector<int>& arr) {
    if (arr.empty()) return 0;
    int result = arr[0];
    for (size_t i = 1; i < arr.size(); i++) {
        result = gcd(result, arr[i]);
        if (result == 1) return 1;
    }
    return result;
}
    int maxLength(vector<int>& nums) {
         int n = nums.size();
         int maxLen = 0;
         for(int i = 0;i<n;i++){
          for(int j = i;j<n;j++){
            vector<int> arr;
            for(int k = i; k<=j;k++){
                arr.push_back(nums[k]);            
                }
                long long pro = prod(arr);
         int g = findgcd(arr);
         long long l = lcmd(arr);
    if(pro==l*(long long)g){
         maxLen = max(maxLen, (int)arr.size()); 
    }
          }
    }     
  return maxLen;
    }
};
