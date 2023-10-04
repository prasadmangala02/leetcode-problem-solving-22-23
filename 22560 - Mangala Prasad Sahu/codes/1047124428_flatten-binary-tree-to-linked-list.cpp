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
    void preOrderTraverse(TreeNode* root, queue<TreeNode*>& q){
        if(root == NULL) return;
        TreeNode* temp = root;
    
        q.push(temp);
        preOrderTraverse(temp->left, q);
        preOrderTraverse(temp->right, q);

    }
public:
    void flatten(TreeNode* root) {
        if(root == NULL) return;
        queue<TreeNode*> q;
        preOrderTraverse(root, q);     
        TreeNode* current = root;
        q.pop();
        while(!q.empty()){
            current->right = q.front();
            current->left = NULL;
            current = current->right;
            q.pop();
        }
        current->right = NULL;
    }
};