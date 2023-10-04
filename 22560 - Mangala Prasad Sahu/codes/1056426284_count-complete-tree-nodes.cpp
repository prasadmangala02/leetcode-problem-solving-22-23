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

 // Recursive solution
class Solution {
public:
    int helper(TreeNode* root){
        if (root == NULL) return 0;
        else if(root->left == NULL && root->right == NULL) return 1;
        return 1 + helper(root->left) + helper(root->right);
    }
    int countNodes(TreeNode* root) {
        int count = 0;
        count = helper(root);
        return count;
    }
};