class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int size = s.size();
        for (int i = 1 ; i <= size / 2 ; i++){
            string newStr = "";
            // string temp = s.substr(0,i);
            // int tsize = temp.size();
            for (int j = 0 ; j < size / i ; j++){
                newStr += s.substr(0,i);
            }
            if(newStr == s){
                return true;
                break;
            }
        }

        return false;
    }
};