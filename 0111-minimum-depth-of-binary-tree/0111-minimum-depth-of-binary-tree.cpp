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
    int minDepth(TreeNode* root) {
        int mindepth=0;
        if(root==nullptr) return 0;
        queue<TreeNode*> que;
        que.push(root);
        bool brea=false;
        while(!que.empty()){
            if(brea) break;
            int n=que.size();
            for(int i=0;i<n;i++){
                TreeNode* node=que.front();
                que.pop();
                if(node->left==nullptr && node->right==nullptr){
                    brea=true;
                    break;
                }
                if(node->left!=nullptr) que.push(node->left);
                if(node->right!=nullptr) que.push(node->right);
            }
            mindepth++;

        }
        return mindepth;
    }
};