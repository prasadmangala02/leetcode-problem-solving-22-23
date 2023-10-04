class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int n = s.size();
        
        // Traverse the string from the end
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == ' ') {
                // If we encounter a space and count is greater than 0,
                // it means we've found the last word's length, so we can break.
                if (count > 0) {
                    break;
                }
                continue;
            } else {
                count++;
            }
        }
        
        return count;
    }
};
