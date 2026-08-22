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
    void insert_Into_BST(TreeNode* root,int val,int min,int max){
        if(root==nullptr) return;
        if(root->left==nullptr && val>min && val<root->val ){
            root->left=new TreeNode(val);
            return;
        }
        if(root->right==nullptr && val<max && val>root->val){
            root->right=new TreeNode(val);
            return;
        }
        insert_Into_BST(root->left,val,min,root->val);
        insert_Into_BST(root->right,val,root->val,max);
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==nullptr){
            root=new TreeNode(val);
            return root;
        }
        int min=INT_MIN;
        int max=INT_MAX;
        insert_Into_BST(root,val,min,max);
        return root;
    }
};