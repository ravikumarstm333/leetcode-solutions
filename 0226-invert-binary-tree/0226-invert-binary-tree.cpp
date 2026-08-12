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
    void invertTree2(TreeNode* root, TreeNode* &res){
        if(root==nullptr) return;
        res=new TreeNode(root->val);
        invertTree2(root->left,res->right);
        invertTree2(root->right,res->left);
    }
    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr) return nullptr;
        TreeNode* res=new TreeNode(0);
        invertTree2(root,res);
        return res;
    }
};