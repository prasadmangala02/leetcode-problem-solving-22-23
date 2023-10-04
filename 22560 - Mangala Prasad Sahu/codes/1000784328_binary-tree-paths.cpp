
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

    void helper_function(TreeNode* root, vector<string> &result, string ans_str){
         if(root == NULL) return;
         if((root->left == NULL) && (root->right == NULL)){
             ans_str += to_string(root->val);
             result.push_back(ans_str);
         }
         ans_str += to_string(root->val);
         helper_function(root->left, result, ans_str + "->");
         helper_function(root->right, result, ans_str + "->");

    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string ans_str = "";
        vector<string> result;
        helper_function(root, result ,ans_str);
        return result;
    }
};