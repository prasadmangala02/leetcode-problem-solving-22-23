// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int nonZeroIndex = 0;

//         for (auto i = nums.begin(); i != nums.end(); i++) {
//             if (*i != 0) {
//                 nums[nonZeroIndex++] = *i;
//             }
//         }

//         while (nonZeroIndex < nums.size()) {
//             nums[nonZeroIndex++] = 0;
//         }
//     }
// };

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int nonzero_indices = 0;        
        for(auto i = nums.begin() ; i!=nums.end() ; i++){
            if(*i != 0){
                nums[nonzero_indices++] = *i;
            }
        }

        for (int j = nonzero_indices ; j < nums.size() ; j++){
            nums[j] = 0;
        }
    }
};