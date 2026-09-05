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
    int deepestLeavesSum(TreeNode* root) {
        // TC O(n)
        // SC O(n)
        queue<TreeNode*> que;
        int res=0;
        que.push(root);
        while(!que.empty()){
            int n=que.size();
            res=0;
            for(int i=0;i<n;i++){
                TreeNode* node=que.front();
                que.pop();
                res+=node->val;
                if(node->left!=nullptr) que.push(node->left);
                if(node->right!=nullptr) que.push(node->right);

            }
        }
        return res;

    }
};