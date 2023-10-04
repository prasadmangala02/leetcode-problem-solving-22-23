class Solution {
public:
    void backtrack(int index, vector<int>& nums, vector<vector<int>>& result){
        // Base case
        if(index == nums.size()){
            result.push_back(nums);
            return;
        }

        for(int i =index; i < nums.size(); i++){

            // Changing the original input
            swap(nums[index], nums[i]);
            backtrack(index+1, nums, result);
            swap(nums[index], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> result;
        backtrack(0, nums, result);

        return result;
    }
};