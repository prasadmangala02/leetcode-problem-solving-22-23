class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> result;
        unordered_map<int, int> umap;
        int size = nums.size();
        for (int i = 0 ; i < size ; i++){
            umap[nums[i]]++;
        }

        for(auto x : umap){
            if(x.second > 1){
                result.push_back(x.first);
            }
        }

        return result;
    }
};