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
    void helper(TreeNode* root, unordered_map<int, int>& umap){
        if(!root) return;
        umap[root->val]++;
        // cout << root->val << endl;
        helper(root->left, umap);
        helper(root->right, umap);
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map <int, int> umap;
        int maxFreq = 0;
        vector<int> mostFreqElems;
        helper(root, umap);
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