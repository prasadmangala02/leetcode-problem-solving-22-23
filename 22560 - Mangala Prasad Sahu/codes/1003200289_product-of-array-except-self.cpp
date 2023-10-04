
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        // Left products
        int size = nums.size();
        vector<int> left(size);
        vector<int> right(size);
        vector<int> result(size);
        left[0] = 1;
        right[size - 1] = 1;
        for (int i = 1 ; i < size  ; i++){
            left[i] = left[i-1] * nums[i-1];
        }

        for (int j = size - 2 ; j >= 0 ; j--){
            right[j] = right[j+1] * nums[j+1];
        }

        for(int k = 0 ; k < size ; k++){
            result[k] = left[k] * right[k];
        }

        return result;
    }
};