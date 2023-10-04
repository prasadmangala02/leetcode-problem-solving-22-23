class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int leftsum=0;
        int curr=0;
        int sum=0;
        
        for (int i=0;i<nums.size();i++)
            sum+=nums[i];
        
        for (int i=0;i<nums.size();i++){
            
            leftsum+=curr;
            
            curr=nums[i];
            
            sum=sum-curr;
            
            if(leftsum==sum)
            return i;
        }
        
     return -1;
        
    }
};