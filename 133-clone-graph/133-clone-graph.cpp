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
    unordered_map<Node*,Node*>mp;
    Node* cloneGraph(Node* node) {
        if(!node)
            return nullptr;
        dfs(node);
            return mp[node];
        
    }
    void dfs(Node *key)
    {
        Node *new_node=new Node(key->val);
        mp[key]=new_node;
        for(auto it:key->neighbors)
        {
            if(mp.find(it)==mp.end())
                dfs(it);
             new_node->neighbors.push_back(mp[it]);
        }
    }
};