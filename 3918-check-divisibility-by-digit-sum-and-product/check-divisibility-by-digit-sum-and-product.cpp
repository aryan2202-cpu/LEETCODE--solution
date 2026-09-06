class Solution {
public:
    bool checkDivisibility(int n) {
    int x = n;
    vector<int>arr;
    while(n>0){
        int ld = n%10;
        arr.push_back(ld);
        n = n/10;
    }    
    int sum = 0;
    int pro = 1;
    for(int i = 0;i<arr.size();i++){
        sum = sum + arr[i];
        pro = pro*arr[i];
    }
    int finalSum = sum+pro;
    if(x%finalSum==0) return true;
    return false;
    }
};