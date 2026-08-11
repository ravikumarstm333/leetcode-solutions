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
    bool hasPathSum2(TreeNode* root,int target,int sum=0){
        if(root==nullptr) return false;
        sum+=root->val;
        if(root->left==nullptr && root->right==nullptr && sum==target){
            return true;
        }
        if(hasPathSum2(root->left,target,sum) || hasPathSum2(root->right,target,sum)) return true;
        return false;
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr) return false;
        return hasPathSum2(root,targetSum);
        


        
    }
};