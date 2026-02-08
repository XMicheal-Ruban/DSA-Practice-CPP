/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 #include<sstream>
class Codec {
public:


    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string ans = "";
        buildstr(root, ans);
        return ans;
    }
    void buildstr(TreeNode* node, string& ans){
        if(!node){
        ans+= "#,";
        return;    
        }
        ans+= to_string(node->val) + ',';
        buildstr(node->left, ans);
        buildstr(node-> right, ans);
    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        stringstream ss(data);
        string item;
        queue<string> q;
        while(getline(ss, item, ',')){
            q.push(item);
        }
        return str(q);
    }
    TreeNode* str(queue<string>& q){
        if(q.empty()) return NULL;
        string s = q.front();
        q.pop();
        if(s == "#"){
            return NULL;
        }
        TreeNode*  node = new TreeNode(stoi(s));
        node->left=  str(q);
        node->right = str(q);
        return node;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root))