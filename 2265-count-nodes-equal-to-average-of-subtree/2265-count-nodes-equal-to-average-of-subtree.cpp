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
    pair<int,int> getAverage(TreeNode* root,int &res){
        if(root==nullptr) return{};
        pair<int ,int > ll=getAverage(root->left,res);
        pair<int ,int > rr=getAverage(root->right,res);
        pair<int ,int> p;
        p.first=1+ll.first+rr.first;
        p.second=root->val+ll.second+rr.second;
        if(p.second/p.first==root->val) res++;
        return p;
    }
    int averageOfSubtree(TreeNode* root){
        int res=0;
        pair<int,int> temp=getAverage(root,res);
        return res;
    }
};