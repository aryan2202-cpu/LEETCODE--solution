class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftMin(n);
        leftMin[0] = nums[0];
        int idx = 1;
        while(idx < n){
            leftMin[idx] = min(leftMin[idx-1], nums[idx]);
            idx++;
        }

        multiset<int> rightVals;
        int j = n-1;
        while(j >= 1){
            rightVals.insert(nums[j]);
            j--;
        }

        j = 1;
        while(j < n-1){
            rightVals.erase(rightVals.find(nums[j]));
            auto it = rightVals.upper_bound(leftMin[j]);
            if(it != rightVals.end() && *it < nums[j]) return true;
            j++;
        }
        return false;
    }
};
