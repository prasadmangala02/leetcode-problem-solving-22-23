class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

                
        double curr_sum = 0, max_sum = INT_MIN;

        int i = 0;
        int j = 0;

        while(j < nums.size()){
            curr_sum += nums[j];
            if((j - i + 1) < k ){
                j++;
            }
            else if((j - i + 1) == k ){
                if(max_sum < (curr_sum )){
                    max_sum = curr_sum ;
                }
            curr_sum -= nums[i];
            i++;
            j++;
            }
            
        }

        return max_sum / k;
    }
};