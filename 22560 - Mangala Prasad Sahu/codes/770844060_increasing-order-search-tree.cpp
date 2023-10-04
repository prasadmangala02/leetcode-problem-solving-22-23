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
    TreeNode* newTree , *curr;
    TreeNode* increasingBST(TreeNode* root) {
        if(!root) 
            return NULL;
        increasingBST(root->left);
        
        if(newTree == NULL){
            newTree = new TreeNode(root->val);
            curr = newTree;
        }
        else{
            curr -> right = new TreeNode(root->val);
            curr = curr -> right;
        }
        increasingBST(root->right);
        return newTree;
    }
};