class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int len1, len2, itr1, itr2;
        len1 = str1.length();
        len2 = str2.length();

        int gcd = __gcd(len1, len2);

        string sbstr = str1.substr(0,gcd);
        
        string newstr1 = "";
        string newstr2 = "";

        itr1 = len1/gcd;
        itr2 = len2/gcd;

        for (int i = 0 ; i < itr1 ; i++){
            newstr1.append(sbstr);
        }

        for (int j = 0 ; j < itr2 ; j++){
            newstr2.append(sbstr);
        }

        if ((str1.compare(newstr1) == 0) && (str2.compare(newstr2) == 0)){
            return sbstr;
        }

        else return "";
    }
};