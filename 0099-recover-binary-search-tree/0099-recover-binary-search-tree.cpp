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
    void recoverTree(TreeNode* root) {
        TreeNode* first = nullptr;
        TreeNode* second = nullptr;
        TreeNode* lseen = nullptr;
        helper(root, lseen, first, second);
        swap(first->val, second->val); 
    }
    void helper(TreeNode* node, TreeNode*& lseen, TreeNode*& first, TreeNode*& second)
    {
        if(!node) return;
        helper(node->left, lseen, first, second);
        if(lseen && lseen->val > node->val){
            if(!first) first = lseen;
            second = node;
        }
        lseen = node;
        helper(node->right, lseen, first, second);
        return;
    }
};