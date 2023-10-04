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
    vector<int> findMode(TreeNode* root) {

        unordered_map <int, int> umap;
        int maxFreq = 0;
        vector<int> mostFreqElems;
        // helper(root, umap);
        queue<TreeNode*> q;
        if(!root) return mostFreqElems;
        q.push(root);

        while(!q.empty()){
            TreeNode* ptr = q.front();
            q.pop();
            umap[ptr->val]++;

            if(ptr->left){
                q.push(ptr->left);
            }
            if(ptr->right){
                q.push(ptr->right);
            }
        }
        for (const auto& pair : umap){
            if(pair.second > maxFreq){
                maxFreq = pair.second;
                mostFreqElems.clear();
                mostFreqElems.push_back(pair.first);
            }
            else if(pair.second == maxFreq) {
                mostFreqElems.push_back(pair.first);
            }
        }
        // for(const auto& itr : umap){
        //     cout << itr.first << "|" << itr.second << endl;
        // }
        return mostFreqElems;

    }
};