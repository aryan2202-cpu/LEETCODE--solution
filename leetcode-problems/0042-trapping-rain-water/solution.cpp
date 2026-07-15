class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>prefixmax(n);
        vector<int>suffixmax(n);


        prefixmax[0] = height[0];
        for(int i=1;i<n;i++)
        {
            prefixmax[i] = max(prefixmax[i-1],height[i]);
        }

        suffixmax[n-1] = height[n-1];
        for(int i=n-2;i>=0;i--)
        {
           suffixmax[i] = max(suffixmax[i+1],height[i]);
        }

        int ans = 0;

        for(int i=0;i<n;i++)
        {
            if(height[i]<prefixmax[i] and height[i]<suffixmax[i])
            {
                ans += min(prefixmax[i],suffixmax[i]) - height[i];
            }
        }
        return ans;
    }
};
