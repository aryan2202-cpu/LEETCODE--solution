class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        vector<int> ans;
        vector<int> arr; 

        for (int i = 0; i < n; i++) {
            while (asteroids[i] < 0 && !arr.empty() && arr.back() > 0) {
                if (arr.back() < -asteroids[i]) {
                    arr.pop_back();
                } else if (arr.back() == -asteroids[i]) {
                    arr.pop_back();
                    goto skip;
                } else {
                    goto skip;
                }
            }
            arr.push_back(asteroids[i]);
            skip:;
        }

        for (int i = 0; i < arr.size(); i++) {
            ans.push_back(arr[i]);
        }
        return ans;
    }
};
