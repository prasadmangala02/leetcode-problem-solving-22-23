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
    long long  curr_min = LONG_MAX, tree_min;
    void helper(TreeNode* root){
        if (root == NULL) return;
        else if(root->val <= curr_min){
            if(root->val > tree_min){
                curr_min = root->val;
            }
        }
        helper(root->left);
        helper(root->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        tree_min = root->val;
        helper(root);

        if(tree_min == LONG_MAX) return -1;

        return curr_min;
    }
};