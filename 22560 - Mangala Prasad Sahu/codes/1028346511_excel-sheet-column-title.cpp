class Solution {
public:
    string convertToTitle(int columnNumber) {
        int n = columnNumber;
        string ans;
        while(n){
            n = n - 1;
            int num = n % 26;
            ans += (char)(num + 'A');
            n = n / 26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};