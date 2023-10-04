class Solution {
private:
bool isVowel(char ch) { return (ch == 'a') || (ch == 'e') ||(ch == 'i') ||(ch == 'o') ||(ch == 'u') || (ch == 'A') || (ch == 'E') ||(ch == 'I') ||(ch == 'O') ||(ch == 'U'); } 
public:
    string reverseVowels(string s) {
        int left = 0, right = s.size();

        while(left < right){

            if(isVowel(s[left]) && isVowel(s[right])){
                swap(s[left], s[right]);
                left++;
                right--;
            }

            if(!isVowel(s[left])) left++;
            if(!isVowel(s[right])) right--;
        }

        return s;
    }
};