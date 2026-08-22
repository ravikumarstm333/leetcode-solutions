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
    void getSubtree(TreeNode* root,int val,TreeNode* &subtree){
        if(root==nullptr) return;
        if(root->val==val){
            subtree=root;
            return;
        }
        getSubtree(root->left,val,subtree);
        getSubtree(root->right,val,subtree);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* res=nullptr;
        getSubtree(root,val,res);
        return res;
    }
};