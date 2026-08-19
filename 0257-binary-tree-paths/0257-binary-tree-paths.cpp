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
    void pathOfBinaryTree(TreeNode* root,string s,vector<string> &res){
        if(root==nullptr){
            return;
        }
        if(root->left==nullptr  && root->right==nullptr){
            s+=to_string(root->val);
            res.push_back(s);
            return;
        }
        s+=to_string(root->val)+"->";
        pathOfBinaryTree(root->left,s,res);
        pathOfBinaryTree(root->right,s,res);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        string s="";
        pathOfBinaryTree(root,s,res);
        return res;
    }
};