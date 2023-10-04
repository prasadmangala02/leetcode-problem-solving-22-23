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
private:
    int height(TreeNode* root){
        if(root == NULL) return 0;
        // if(root->left == NULL && root->right == NULL) return 1;
        // if(root->left == NULL && root->right != NULL) return 1 + height(root->right);
        // if(root->left != NULL && root->right == NULL) return 1 + height(root->left);
        else return 1 + max(height(root->left), height(root->right));

    }
public:
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        if((abs(leftHeight - rightHeight) < 2) && isBalanced(root->left) && isBalanced(root->right)) return true;
        else return false;
    }
};