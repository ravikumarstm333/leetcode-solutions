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
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> qu;
        qu.push(root);
        while(!qu.empty()){
            int n=qu.size();
            vector<int> v;
            int a=0;
            for(int i=0;i<n;i++){
                TreeNode* node=qu.front();
                qu.pop();
                if(node->left!=nullptr){
                    qu.push(node->left);
                    v.push_back(node->left->val);
                    a=1;
                }else v.push_back(101);
                if(node->right!=nullptr){
                    qu.push(node->right);
                    v.push_back(node->right->val);
                    a=1;
                }else v.push_back(101);
            }
            if(a==0)break;
            for(int i=0;i<v.size()/2;i++){
                if(v[i]!=v[v.size()-1-i]) return false;
            }
        }
        return true;


    }
};