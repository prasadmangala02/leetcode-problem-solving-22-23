class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans(nums.size(), -1); // Initialize with -1
        stack<int> stk;
        
        int size = nums.size();
        for (int i = 0; i < 2 * size; ++i) {
            int num = nums[i % size];
            while (!stk.empty() && num > nums[stk.top()]) {
                ans[stk.top()] = num;
                stk.pop();
            }
            if (i < size) {
                stk.push(i);
            }
        }

        return ans;
    }
};

// Time - 43 minutes