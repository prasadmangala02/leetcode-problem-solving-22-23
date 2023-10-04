/*
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> left_product(n);
        vector<int> right_product(n);
        left_product[0] = 1;
        right_product[n-1] = 1;

        for(int i=1; i<n; i++){
            int j = (n-1) - i;
            left_product[i] = left_product[i-1] * nums[i-1];
            right_product[j] = right_product[j+1] * nums[j+1];
        }

        for(int i=0; i<n; i++){
            ans[i] = left_product[i] * right_product[i];
        }
        return ans;        
    }
};*/
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