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
    int ans=INT_MIN;
    int helper(TreeNode* root){
        if(root==nullptr) return 0;

        int maxl=max(0,helper(root->left));
        int maxr=max(0,helper(root->right));

        ans=max(ans,root->val+maxl+maxr);

        return root->val+max(maxl,maxr);
    }
    int maxPathSum(TreeNode* root) {
        helper(root);
        return ans;
        

    }
};