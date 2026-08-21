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
    void secondMin(TreeNode* root,int &secMin,int min){
        if(root==nullptr) return;
        if(root->val>min && (secMin==-1 || root->val<secMin)){
            secMin=root->val;
        }
        secondMin(root->left,secMin,min);
        secondMin(root->right,secMin,min);

        
    }
    int findSecondMinimumValue(TreeNode* root) {
        int secMin=-1;
        int min=root->val;
        secondMin(root,secMin,min);
        return secMin;


    }
};