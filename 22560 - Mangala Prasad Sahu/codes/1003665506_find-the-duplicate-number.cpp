class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int tortoise = nums[0];
        int hare = nums[0];

        // Slow and fast pointers
        do{
            tortoise = nums[tortoise];
            hare = nums[nums[hare]];
        }while(tortoise != hare);

        tortoise = nums[0];
        
        // Find the entrance to the cycle
        while(tortoise != hare){
            tortoise = nums[tortoise];
            hare = nums[hare];
        }

        return hare;
    }
};