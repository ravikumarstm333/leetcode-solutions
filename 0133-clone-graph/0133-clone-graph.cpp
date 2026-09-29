/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        unordered_map<Node*,Node*> mp;
        queue<Node*> q;
        if(node==nullptr) return nullptr;
        mp[node]=new Node(node->val);
        q.push(node);
        while(!q.empty()){
            Node* curr = q.front();
            q.pop();
            for(Node* neig : curr->neighbors){
                if(mp.find(neig)==mp.end()){
                    mp[neig]= new Node(neig->val);
                    q.push(neig);
                }
                mp[curr]->neighbors.push_back(mp[neig]);
            }
        }
        return mp[node];
        
    }
};