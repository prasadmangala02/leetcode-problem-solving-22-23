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
    int countNodes(TreeNode* root) {
        if (!root) return 0;
        int count = 0;
        queue<TreeNode*> q;

        q.push(root);
        count++;

        while(!q.empty()){
            TreeNode* ptr = q.front();
            q.pop();

            if(ptr->left != NULL){
                q.push(ptr->left);
                count++;
            }
            if(ptr->right != NULL){
                q.push(ptr->right);
                count++;
            }
        }

        return count;
    }
};