#include<cmath>
#include<unordered_set>
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int> window;
        int i = 0;
        while(i < n){
            if(i > k){
                window.erase(nums[i-k-1]);
            }
            if(window.count(nums[i])){
                return true;
            }
            window.insert(nums[i]);
            i++;
        }
        return false;
    }
};
