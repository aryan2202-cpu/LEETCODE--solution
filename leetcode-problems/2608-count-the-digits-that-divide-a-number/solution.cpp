class Solution {
public:
    int countDigits(int num) {
        int original = num;
        vector<int> arr;
        while(num!=0){
        int ld = num%10;
        arr.push_back(ld);
        num = num/10;
        }
        int count = 0;
        int k;
        for(int i = 0;i<arr.size();i++){
        if(arr[i]!=0 && original%arr[i]==0) count++;
        
        }
        return count;
    }
};
