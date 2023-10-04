class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        for (int i = 1 ; i <= s.size() / 2 ; i++){
            string newStr = "";
            string temp = s.substr(0,i);
            for (int j = 0 ; j < s.size() / temp.size() ; j++){
                newStr += temp;
            }
            if(newStr == s){
                return true;
                break;
            }
        }

        return false;
    }
};