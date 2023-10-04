class Solution {
public:
    string simplifyPath(string path) {
        stack<string> stk;
        string temp = "";
        string result = "";

        for(int i = 0; i < path.size(); i++){
            if(path[i] == '/' ) continue;
            else{
                temp = "";
                while(i < path.size() && path[i] != '/'){
                    temp += path[i];
                    i++;
                }
                if(temp == ".."){
                    if(!stk.empty()){
                        stk.pop();
                    }
                }
                else if(temp != ".")stk.push(temp);
            }
        }

        while(!stk.empty()) {
            result = '/' + stk.top() + result;
            stk.pop();
        }
        return result.empty() ? "/":result;
    }
};