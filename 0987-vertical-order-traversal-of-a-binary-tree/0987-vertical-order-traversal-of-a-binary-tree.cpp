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

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int ,multiset<int>>> mp;
        queue<pair<TreeNode*,pair<int ,int>>> que;
        que.push({root,{0,0}});
        while(!que.empty()){
            int n=que.size();
            for(int i=0;i<n;i++){
                int vertex=que.front().second.first;
                int level=que.front().second.second;
                TreeNode* node=que.front().first;
                mp[vertex][level].insert(node->val);
                que.pop();
                if(node->left!=nullptr) que.push({node->left,{vertex-1,level+1}});
                if(node->right!=nullptr) que.push({node->right,{vertex+1,level+1}});
            }
        }
        vector<vector<int>> result;
        for(auto &vertex:mp){
            vector<int> v;
            for(auto &level:vertex.second){
                for(auto &value:level.second){
                    v.push_back(value);
                }
            }
            result.push_back(v);

        }
        return result;

    }
};