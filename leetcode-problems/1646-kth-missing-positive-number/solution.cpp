class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int count = 0;
        int n = arr.size();
        int maxNumber = arr[n-1];
        int search;
        vector<int> newArr;
        for(int i = 1;i<=maxNumber+k;i++){
            auto search = find(arr.begin(),arr.end(),i);
            if(search!=arr.end()) {continue;}
            else {
                count++; 
            newArr.push_back(i);
            }
            if(count==k) break;
        }
        return newArr[newArr.size()-1];
    }
};
