class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int res = 0;
        vector<int> vect;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == '(')
                count++;
            else if(s[i] == ')')
                count--;
            res = max(count,res);
        }
    
        return res;
    }
};