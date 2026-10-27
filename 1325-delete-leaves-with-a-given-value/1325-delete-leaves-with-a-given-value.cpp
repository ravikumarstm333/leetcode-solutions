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
    void helper(TreeNode* root,TreeNode* pre,char di,int target){
        if(root == nullptr) return;
        helper(root->left,root,'l',target);
        helper(root->right,root,'r',target);
        if(root->val == target && root->left == nullptr && root->right == nullptr){
            if(di=='l'){
                pre->left = nullptr;
            }
            if(di == 'r'){
                pre->right = nullptr;
            }
        }
    }
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if(root->val == target && root->left == nullptr && root->right == nullptr ) return nullptr;
        helper(root,nullptr,'o',target);
        if(root->val == target && root->left == nullptr && root->right == nullptr ) return nullptr;
        return root;
    }
};