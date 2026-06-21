class Solution {
public:
    // 1. Helper function to sort the array
    void selectionSort(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1; i++) {
            int mini = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[mini]) {
                    mini = j;
                }
            }
            int temp = arr[mini];
            arr[mini] = arr[i];
            arr[i] = temp;
        }
    } // <-- This brace closes selectionSort

    // 2. Main LeetCode function
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> newArr;

        // Copy exactly the first 'm' elements from nums1
        for (int i = 0; i < m; i++) {
            newArr.push_back(nums1[i]);
        }

        // Copy exactly the first 'n' elements from nums2
        for (int i = 0; i < n; i++) {
            newArr.push_back(nums2[i]);
        }

        // Sort the merged elements
        selectionSort(newArr);

        // Copy the sorted elements back into nums1
        nums1 = newArr;
    } // <-- This brace closes merge
}; // <-- This brace closes class Solution

