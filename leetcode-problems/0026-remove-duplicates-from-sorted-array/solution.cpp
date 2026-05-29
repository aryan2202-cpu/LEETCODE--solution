class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int k = 1; // Tracks position of next unique element
        for (int i = 1; i < nums.size(); i++) {
            // Compare with previous element
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i]; // Overwrite instead of erase
                k++;
            }
        }
        return k; // Return count of unique elements
    }
};
