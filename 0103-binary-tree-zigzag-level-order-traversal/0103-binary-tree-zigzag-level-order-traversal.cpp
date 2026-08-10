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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
         if(root==nullptr) return res;
        queue<TreeNode*> que;
        bool isZig=false;
        que.push(root);
        while(!que.empty()){
            int n=que.size();
            vector<int> level(n);
            for(int i=0;i<n;i++){
                TreeNode* node=que.front();
                que.pop();
                if(!isZig) level[i]=node->val;
                else level[n-1-i]=node->val;
                if(node->left!=nullptr) que.push(node->left);
                if(node->right!=nullptr) que.push(node->right);
            }
            if(!isZig) isZig=true;
            else isZig=false;
            res.push_back(level);
        }
        return res;
    }
};