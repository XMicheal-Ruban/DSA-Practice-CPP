/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> ans;
    int K;
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        K = k;
        dfs(root, target);
        return ans;
    }
    int dfs(TreeNode* node, TreeNode* target){
        if(!node) return -1;
        if(node == target){
            collect(node, 0);
            return 1;
        }
        int left = dfs(node->left, target);
        int right = dfs(node -> right, target);
        if(left != -1){
            if(left == K) ans.push_back(node->val);
            collect(node->right, left + 1);
            return left + 1;
        }
        if(right != -1){
            if(right == K) ans.push_back(node->val);
            collect(node->left, right + 1);
            return right + 1;
        }
        return -1;
    }
    void collect(TreeNode* node, int dist){
        if(!node) return;
        if(dist == K) {
            ans.push_back(node->val);
            return;
        }
        collect(node->left, dist + 1);
        collect(node->right, dist + 1);
    }
};