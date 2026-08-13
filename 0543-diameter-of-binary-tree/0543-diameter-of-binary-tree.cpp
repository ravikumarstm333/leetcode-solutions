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
    int heightOfTrr(TreeNode* root){
        if(root==nullptr) return 0;
        return 1+max(heightOfTrr(root->left),heightOfTrr(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr) return 0;
        int curHeight=heightOfTrr(root->left)+heightOfTrr(root->right);
        int dimel=diameterOfBinaryTree(root->left);
        curHeight=max(dimel,curHeight);
        int dimer=diameterOfBinaryTree(root->right);
        curHeight=max(curHeight,dimer);
        return curHeight;
    }
};