class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int>arr;
        arr.push_back(0);
        for(int i = 1;i<=n;i++){
            int x = arr[i-1] + gain[i-1];
            arr.push_back(x);
        }
  sort(arr.begin(),arr.end());
  return arr[arr.size()-1];
    }
};