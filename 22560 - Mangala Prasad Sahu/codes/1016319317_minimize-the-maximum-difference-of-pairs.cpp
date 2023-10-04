
class Solution {
private:
    bool isPossible(vector<int>& nums, int p, int mid){
        int count = 0;
        int i = 0;

        for(int i = 0 ; i < nums.size() - 1 ; ){
            if(abs(nums[i + 1] - nums[i]) <= mid){
                count++;
                i++;
            }
            i++;
        }

        return count>=p;
    }
public:
    int minimizeMax(vector<int>& nums, int p) {        
        sort(nums.begin(), nums.end());

        int low = 0, high = abs(nums.back() - nums.front());
        // int low = 1, high = nums[nums.size() - 1] - nums[0];
        // int mid,left,result = -1;
        while(low < high){
            int mid = low + (high - low)/2;
            //////////////////////////////////////////
            if(isPossible(nums, p, mid)){
                high = mid;
            }
            else{
                low = mid + 1;
            }

            // int count = 0;
            // left = 0;
            // for(int right = 0 ; right < nums.size() ; right++){
            //     while(abs(nums[right] - nums[left]) > mid){
            //         left++;
            //     }

            //     count += right - left;
            // }

            // 
            
            
        }

        return low;
    }
};

