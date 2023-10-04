class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        vector<int> result;
        while (i <= j) {
            int squareI = nums[i] * nums[i];
            int squareJ = nums[j] * nums[j];
            if (squareI > squareJ) {
                result.insert(result.begin(), squareI);
                i++;
            } else {
                result.insert(result.begin(), squareJ);
                j--;
            }
        }
        return result;
    }
};
