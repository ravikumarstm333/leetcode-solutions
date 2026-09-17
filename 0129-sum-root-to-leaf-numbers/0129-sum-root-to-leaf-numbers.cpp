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
    void helper(TreeNode* root, int &ans){
        if(root==nullptr) return;
        if(root->right==nullptr && root->left==nullptr){
            ans+=root->val;
        }
        if(root->left!=nullptr){
            root->left->val=root->val*10+root->left->val;
            helper(root->left,ans);
        }
        if(root->right!=nullptr){
            root->right->val=root->right->val=root->val*10+root->right->val;
            helper(root->right,ans);
        }
    }
    int sumNumbers(TreeNode* root) {
        int ans=0;
        helper(root,ans);
        return ans; 
    }
};