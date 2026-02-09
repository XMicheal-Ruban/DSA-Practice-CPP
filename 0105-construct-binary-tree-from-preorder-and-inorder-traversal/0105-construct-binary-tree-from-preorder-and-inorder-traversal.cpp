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
    unordered_map<int, int> map;
    int preidx = 0;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        preidx = 0;
        for(int i = 0 ; i< inorder.size(); i++){
            map[inorder[i]] = i;
        }
        return solve(preorder, 0 , inorder.size() -1);
    }
    TreeNode* solve(vector<int>& preorder, int start, int end){
        if(start > end) return nullptr;
        int rootval = preorder[preidx++];
        TreeNode* root = new TreeNode(rootval);
        int pivot = map[rootval];
        root->left = solve(preorder,start, pivot - 1 );
        root-> right = solve(preorder, pivot+1, end);
        return root;
    }
};