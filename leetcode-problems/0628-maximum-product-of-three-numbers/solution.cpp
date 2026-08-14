class Solution {
public:
    long long  maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long lastproduct=1;
        long long firstproduct=1;
        lastproduct=nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        firstproduct=nums[0]*nums[1]*nums[nums.size()-1];
        if(firstproduct>lastproduct){
            return firstproduct;
        }
        else return lastproduct;
    }
};
