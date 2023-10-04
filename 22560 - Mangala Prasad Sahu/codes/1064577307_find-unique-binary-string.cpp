class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        
        unordered_set<string> set(nums.begin(), nums.end());

        string str(nums[0].size(), '0');

        for(int i = 0; i < str.size(); i++){
            // cout << "str1" << str << endl;
            if(set.find(str) == set.end()){
                break;
            }
            if(str[i] == '0') str[i] = '1';
            // cout << "str2" << str << endl;

        }

        return str;
    }
};