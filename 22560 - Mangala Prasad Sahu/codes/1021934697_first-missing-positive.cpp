class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if (nums.empty()) {
            return 1;
        }

        int n = nums.size();
        vector<int> vect(n + 1, 0); // Initialize with size n + 1

        for (int i = 0; i < n; ++i) {
            if (nums[i] > 0 && nums[i] <= n) {
                vect[nums[i]] = 1;
            }
        }

        for (int i = 1; i <= n; ++i) { // Start from 1, not 0
            if (vect[i] == 0) {
                return i;
            }
        }

        return n + 1;
    }
};
