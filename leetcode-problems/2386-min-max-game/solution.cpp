class Solution {
public:
    vector<int> playRound(vector<int>& nums){
        vector<int> next;
        for(int i = 0; i*2 < nums.size(); i++){
            if(i % 2 == 0) next.push_back(min(nums[2*i], nums[2*i+1]));
            else next.push_back(max(nums[2*i], nums[2*i+1]));
        }
        return next;
    }
    int minMaxGame(vector<int>& nums) {
        while(nums.size() > 1){
            nums = playRound(nums);
        }
        return nums[0];
    }
};
