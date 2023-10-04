class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map <int, int> umap;
        int n = nums.size();
        int complement;
        for(int i = 0 ;i < n ; i++){
            umap[nums[i]] = i;
        }

        for(int j = 0 ; j < n ; j++){
            complement = target - nums[j];
            if(umap.count(complement) && umap[complement] != j){
                return {umap[complement], j};
            }
        }

        return {};
    }
};