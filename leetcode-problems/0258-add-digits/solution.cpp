class Solution {
public:
    int addDigits(int num) {
        while(num>=10){
            int sum = 0;
        vector<int> arr;
        int temp = num;
        while(temp!=0){
        int ld = temp%10;
         arr.push_back(ld);
         temp = temp /10;
        }
         int n = arr.size();
         for(int i = 0;i<n;i++){
            sum = sum + arr[i];
         }
         num = sum;
        }
         return num;      
    }
};
