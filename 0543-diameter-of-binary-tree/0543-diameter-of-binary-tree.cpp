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
    int heightOfTrr(TreeNode* root,int &maxi){
        if(root==nullptr) return 0;
        int leftheight=heightOfTrr(root->left,maxi);
        int rightheight=heightOfTrr(root->right,maxi);
        maxi=max(maxi,leftheight+rightheight);
        return 1+max(leftheight,rightheight);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr) return 0;
        // int curHeight=heightOfTrr(root->left)+heightOfTrr(root->right);
        // int dimel=diameterOfBinaryTree(root->left);
        // curHeight=max(dimel,curHeight);
        // int dimer=diameterOfBinaryTree(root->right);
        // curHeight=max(curHeight,dimer);
        // return curHeight;

        int maaxi=0;
        // o(n)
        int a=heightOfTrr(root,maaxi);
        return maaxi;
    }
};