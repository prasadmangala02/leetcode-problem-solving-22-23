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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(root == NULL){
            return v;
        }
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int> v2;
        while(q.empty() == false){
            TreeNode* curr = q.front();
            q.pop();
            if(curr == NULL){
                v.push_back(v2);
                if(q.size() > 0)
                    q.push(NULL);  
                v2.clear();
                continue;
            }
            v2.push_back(curr->val);
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
        return v;
    }
};