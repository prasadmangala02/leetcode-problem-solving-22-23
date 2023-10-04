class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

    int lo, hi, mi;
    lo = 0, hi = nums.size() - 1 ;

    while(lo <= hi){
        mi = (lo+hi)/2;
        if(target < nums[mi]) hi = mi - 1;
        else if (target > nums[mi]) lo = mi + 1;
        else return mi;
    }
    return lo;
    }
};