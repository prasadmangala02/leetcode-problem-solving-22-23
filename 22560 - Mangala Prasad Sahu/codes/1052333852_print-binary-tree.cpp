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
    // int m;
    int findHeight(TreeNode* root){
        if(root == NULL) return 0 ;
        int left = findHeight(root->left);
        int right = findHeight(root->right);
        return 1 + max(left, right);
    }
    void helper(vector<vector<string>> &res, TreeNode* root, int r, int c, int m){
        if(root == NULL) return;
        res[r][c] = to_string(root->val);
        // res.at(r).at(c) = to_string(root->val);
        // cout << "m: "<< m << endl;
        // int offset = (1 << (m - r - 1));
        // cout << offset << endl;
        helper(res, root->left, r+1, c-pow(2,m-r-2), m);
        // cout<<"ghffm";
        helper(res, root->right, r+1, c+pow(2,m-r-2), m);
        // cout<<"srsg";
    }
    vector<vector<string>> printTree(TreeNode* root) {
        int m = findHeight(root);
        int n = (1 << m) - 1;
        // cout << "m: "<< m << endl;
        vector<vector<string>> res(m, vector<string>(n, ""));
        int c = (n-1)/2;        
        helper(res, root, 0, c, m);

        return res;
    }
};