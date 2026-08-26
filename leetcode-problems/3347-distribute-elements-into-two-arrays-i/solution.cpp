class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        if(nums.empty()) return nums;
        vector<int> arr1;
        vector<int> arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int i=2;
        while(i<nums.size() ){
            if(arr1.back()>=arr2.back()){
                arr1.push_back(nums[i]);
            }
            else{
                arr2.push_back(nums[i]);
            }
            i++;


        }
        vector<int> hj;
        i=0;
        while(i<arr1.size()){
            hj.push_back(arr1[i]);
            i++;
        }
        i=0;
        while(i<arr2.size()){
            hj.push_back(arr2[i]);
            i++;
        }
        return hj;
        
    }
};
