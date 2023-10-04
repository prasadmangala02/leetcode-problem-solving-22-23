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
 // Iterative solution - 0ms
class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        
        if(!root) return true;
        queue<TreeNode*> q;
        int target_val = root->val;
        q.push(root);

        while(!q.empty()){
            TreeNode* ptr = q.front();
            q.pop();
            if(ptr->val != target_val) return false;
            if(ptr->left) q.push(ptr->left);
            if(ptr->right) q.push(ptr->right);
        }
        return true;
    }
};