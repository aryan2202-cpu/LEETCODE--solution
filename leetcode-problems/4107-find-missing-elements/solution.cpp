class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int min = nums[0];
        int max = nums[nums.size()-1];
        int search;
        int n = nums.size();
        vector<int> arr;
        for(int i = min;i<=max;i++){
            auto search = find(nums.begin(),nums.end(),i);
            if(search!=nums.end()) continue;
            else arr.push_back(i);
        }
        return arr;
    }
};
