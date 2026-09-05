class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<int> arr;
        while(n>0){
            int ld = n%10;
            if(ld!=0)
            arr.push_back(ld);
            n = n /10;
        }
        long long sum = 0;
        for(int i = 0;i<arr.size();i++){
            sum = sum + arr[i];
        }
        long long x = 0;
        for(int i = arr.size()-1;i>=0;i--){
            x = x*10 + arr[i];
        }
        return x*sum;
    }
};