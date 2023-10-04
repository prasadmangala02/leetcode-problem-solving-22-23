class Solution {
public:

    int arraySum(vector<int> &v){
        int initial_sum = 0;
        return accumulate(v.begin(), v.end(), initial_sum);
    }
    int missingNumber(vector<int>& nums) {
        int sum;
        sum = arraySum(nums);
        int sz = nums.size();
        sz = (sz*(sz+1))/2;
        return sz - sum;
    }
};