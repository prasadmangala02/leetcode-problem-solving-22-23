class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
    
        int len = nums.size();
        vector<int> result = {nums[0]};

        for (int i = 1 ; i < len ; i++){
            result.push_back(result.back() + nums[i]);
        }

        return result;
    }
};