
class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(), nums.end());

        int left = 0, right = nums[nums.size() - 1] - nums[0];

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (numPossible(nums, p, mid) >= p) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }

private:
    int numPossible(vector<int>& nums, int p, int maxDiff) {
        int index = 0;
        int count = 0;

        while(index < nums.size() - 1){
            if(nums[index + 1] - nums[index] <= maxDiff){
                count++;
                index++;
            }
            index++;
        }
       

        return count;
    }
};


/*
class Solution {
private:
    bool isPossible(vector<int>& nums, int p, int mid){
        int count = 0;
        int left = 0;

        for(int right = 0 ; right < nums.size() ; right++){
            while(abs(nums[right] - nums[left]) > mid){
                left++;
            }
            count += right - left;
        }

        return count>=p;
    }
public:
    int minimizeMax(vector<int>& nums, int p) {        
        sort(nums.begin(), nums.end());

        // int low = 0, high = abs(nums.back() - nums.front());
        int low = 1, high = nums[nums.size() - 1] - nums[0];
        int mid,left,result = -1;
        while(low <= high){
            mid = low + (high - low)/2;
            //////////////////////////////////////////
            if(isPossible(nums, p, mid)){
                result = mid;
                high = mid - 1;
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

        return result;
    }
};
*/
