/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root,vector<int>&arr){
        if(!root) return;
        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right,arr);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int>arr;
        inorder(root,arr);
        vector<int>ans;
        for(int i = 0;i<arr.size();i++){
            if(arr[i]>=low && arr[i]<=high){
                ans.push_back(arr[i]);
            }
        }
        int finalans = 0;
        for(int i = 0;i<ans.size();i++){
            finalans = finalans + ans[i];
        }
        return finalans;
    }
};