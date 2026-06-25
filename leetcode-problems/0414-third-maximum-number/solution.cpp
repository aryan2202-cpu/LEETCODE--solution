class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        vector <int> arr;
        for(int i = 0 ;i<n;i++){
        arr.push_back(nums[i]);
        }
        sort(arr.begin(),arr.end());
        arr.erase(unique(arr.begin(),arr.end()),arr.end()); // lel i didnt know this fnc
        if(arr.size()<=2){
            return arr[arr.size()-1];
        }
        return arr[arr.size()-3];
        
    }
};
