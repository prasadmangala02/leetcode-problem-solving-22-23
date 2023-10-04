class Solution {
public:
    string decodeString(string s) {
        stack<string> strStack;
        stack<int> intStack;
        string result = "";
        string temp = "";
        int num = 0;
        for(int i = 0; i < s.size(); i++){
            if(isdigit(s[i])) {
                num = 10 * num + s[i] - '0';
            }
            else if(s[i] == '['){
                intStack.push(num);
                num = 0;
                strStack.push(result);
                result = "";
            }
            else if(s[i] == ']'){
                int repeat = intStack.top();
                intStack.pop();
                string temp = strStack.top();
                strStack.pop();

                for (int i = 0; i < repeat; i++){
                    temp += result;
                }
                result = temp;
            }
            else{
                result += s[i];
            }
        }

    
        return result;
    }
};