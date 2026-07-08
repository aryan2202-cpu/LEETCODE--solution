#include<algorithm>
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr;
        int i = 1;
        sort(nums.begin(), nums.end());
       while(i<=n){
        if(!binary_search(nums.begin(), nums.end(), i)){
                arr.push_back(i);
            }
            i++;
        }
        return arr;
    }
};
