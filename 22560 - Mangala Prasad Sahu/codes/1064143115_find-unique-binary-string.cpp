class Solution {
public:
    // Global variable
    string ans;
    // helper function
    void helper(int n, string &str, int index, unordered_set<string>& set){
        if(set.find(str) == set.end()){
            ans = str;
            return;
        }
        else if(index >= n) return;

        str[index] = '0';
        helper(n, str, index+1, set);
        str[index] = '1';
        helper(n, str, index+1, set);

    }
    string findDifferentBinaryString(vector<string>& nums) {

        int size = nums[0].size();

        // for (int i = 0; i < nums.size(); i++){
        //     set.insert(nums[i]);
        // }

        // Initializing the elements of the set with the elements of the set
        unordered_set<string> set(nums.begin(), nums.end());


        // Create a string of 'size' length
        string str(size, '0');
        
        helper(size, str, 0, set);

        return ans;
    }
};