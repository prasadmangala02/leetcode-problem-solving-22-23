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
    int depth(int &maxdepth,TreeNode* root)
    {
        if(root==NULL)return 0;
        int lh=depth(maxdepth,root->left);
        int rh=depth(maxdepth,root->right);
        maxdepth=max(maxdepth,lh+rh);
        return 1+max(lh,rh);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxdepth=0;
        int ans=depth(maxdepth,root);
        return maxdepth;
        
    }
};