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
    void treeSwap(TreeNode* root){
        if (root->left == NULL && root->right == NULL)
            return;
        TreeNode* temp;
        
        temp = root->left;
        root->left = root->right;
        root->right = temp;
        
        if(root->left != NULL) treeSwap(root->left);
        if(root->right != NULL) treeSwap(root->right);
        
    }
    TreeNode* invertTree(TreeNode* root) {
        if (root != NULL) treeSwap(root);
        return root;
    }
};