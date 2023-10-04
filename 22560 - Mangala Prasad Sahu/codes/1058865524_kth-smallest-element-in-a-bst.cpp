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
// Iterative solution
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {

        int count = 0;
        vector<int> result;
        stack<TreeNode*> stk;
        TreeNode* curr = root;
        bool done = 0;
        while(!done){
            if(curr != NULL){
                stk.push(curr);
                curr = curr->left;
            }
            else{
                if(!stk.empty()){
                    curr = stk.top();
                    stk.pop();
                    result.push_back(curr->val);
                    curr = curr->right;
                }
                else done = 1;
            }
        }

        return result[k-1];
    }
};