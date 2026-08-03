class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int k=0;
        for(int i=0;i<=nums.size();i++){
            if(i==nums.size()){
                i=0;
                ans.push_back(nums[i]);
            }
            else{            
                ans.push_back(nums[i]);
            }
            k++;
            if(k==2*nums.size())
            break;
        }
    return ans;

        
    }
};
