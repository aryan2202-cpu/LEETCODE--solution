class Solution {
public:
    int maxProduct(int n) {
        vector<int> arr;
        vector<int> maxPro;
        while(n!=0){
            int ld = n%10;
            arr.push_back(ld);
            n = n / 10;
        }
        int x = arr.size();
           for(int i = 0;i<x;i++){
            for(int j = i+1;j<x;j++){
                int product = arr[i]*arr[j];
                maxPro.push_back(product);
            }
        }
           sort(maxPro.begin(),maxPro.end());
           return maxPro[maxPro.size()-1];
    }
};
