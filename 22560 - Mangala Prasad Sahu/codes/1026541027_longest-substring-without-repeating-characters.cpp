class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int i = 0;
        int j = 0;
        int ans = INT_MIN;
        if(s.length() == 1 || s.length() == 0) return s.length();
        
        unordered_map<char, int> mp;
        
        while(j < s.length()){
            mp[s[j]]++;

            // Window size = j-i+1
            if(mp.size() == j - i + 1){
                ans = max(ans, j - i + 1);
            }

            else if(mp.size() < j - i + 1){

                while(mp.size() < j - i + 1){
                    mp[s[i]]--;
                    if(mp[s[i]] == 0){
                        mp.erase(s[i]);
                    }
                    i++;
                }
            }
            j++;
        }

        return ans;
    }
};