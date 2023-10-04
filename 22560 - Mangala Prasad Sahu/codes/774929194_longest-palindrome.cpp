class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map <char,int> count;
        int res = 0 ;
        for (int i = 0 ; i < s.length() ; i++ ){
            count[s[i]]++;
            if(count[s[i]]%2 == 0)
            {
                res+=count[s[i]];
                count[s[i]] = 0;
            }
        }
        
        for(auto x:count){
            if(x.second == 1){
                res++;
                break;
            }
        }
        
        return res;
    }
};