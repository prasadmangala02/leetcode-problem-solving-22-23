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
    bool ans = true;
    bool helper(TreeNode* root){
        if (root == NULL) return true;
        else if ((root->left && root->val != root->left->val) || (root->right && root->val != root->right->val)) return false;
        return helper(root->left) && helper(root->right);
        

    }
    bool isUnivalTree(TreeNode* root) {
        ans = helper(root);
        return ans;
    }
};