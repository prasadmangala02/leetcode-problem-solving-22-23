class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        int n = s.length();

        for (int i = 0; i < n; i++) {
            if (isalpha(s[i])) {
                st.push(s[i]);
            } else if (!st.empty()) {
                st.pop();
            }
        }

        string result = "";
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
