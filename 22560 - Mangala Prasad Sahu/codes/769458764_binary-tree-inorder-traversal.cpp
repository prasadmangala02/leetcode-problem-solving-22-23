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
    void inOrd(TreeNode*root,vector<int> &vect){
        if (!root){
            return;
        }
        inOrd(root->left,vect);
        vect.push_back(root->val);
        inOrd(root->right,vect);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vect;
        inOrd(root,vect);
        return vect;
    }
};