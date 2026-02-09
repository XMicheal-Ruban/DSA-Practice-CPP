class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        // column -> row -> values (sorted)
        map<int, map<int, multiset<int>>> nodes;
        // queue stores {node, {row, col}}
        queue<pair<TreeNode*, pair<int, int>>> q;
        
        q.push({root, {0, 0}});
        
        while (!q.empty()) {
            auto temp = q.front();
            q.pop();
            TreeNode* node = temp.first;
            int x = temp.second.first;  // row
            int y = temp.second.second; // col
            
            nodes[y][x].insert(node->val);
            
            if (node->left) {
                q.push({node->left, {x + 1, y - 1}});
            }
            if (node->right) {
                q.push({node->right, {x + 1, y + 1}});
            }
        }
        
        vector<vector<int>> ans;
        for (auto p : nodes) {
            vector<int> col;
            for (auto q : p.second) {
                // p.second is the map<int, multiset<int>>
                // col.insert(col.end(), q.second.begin(), q.second.end());
                for (int val : q.second) {
                    col.push_back(val);
                }
            }
            ans.push_back(col);
        }
        return ans;
    }
};