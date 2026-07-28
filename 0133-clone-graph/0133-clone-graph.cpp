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
        if(!node ) return nullptr;
        queue<Node*> q;
        map<Node*, Node*> mp;
        Node* clone = new Node();
        clone->val = node->val;
        q.push(node);
        mp[node] = clone;
        while(!q.empty()){
            Node* u = q.front();
            q.pop();
            for(auto neighbour : u->neighbors){
                if(mp.find(neighbour) == mp.end()){
                    Node* neighbourclone = new Node();
                    neighbourclone->val = neighbour->val;
                    mp[neighbour] = neighbourclone;
                    q.push(neighbour);
                }
                mp[u]->neighbors.push_back(mp[neighbour]);
            }
        } 
        return mp[node];

    }
};