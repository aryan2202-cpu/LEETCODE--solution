class Solution {
public:
    
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
    } 

  
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> newArr;

        
        for (int i = 0; i < m; i++) {
            newArr.push_back(nums1[i]);
        }

        for (int i = 0; i < n; i++) {
            newArr.push_back(nums2[i]);
        }

      
        selectionSort(newArr);

      
        nums1 = newArr;
    } 
}; 

