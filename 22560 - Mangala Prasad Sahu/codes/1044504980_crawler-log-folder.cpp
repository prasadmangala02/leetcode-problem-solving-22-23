class Solution {
public:
    int minOperations(vector<string>& logs) {
       int size = logs.size() ;
       stack<string> stk;

       for(int i = 0; i < size; i++){           
            if(logs[i] ==  "./") continue;
            else if(logs[i] == "../" && !stk.empty()) stk.pop();
            else if(logs[i] != "../") stk.push(logs[i]);
       }
       int count = 0;
       while(!stk.empty()){
           stk.pop();
           count++;
       }

       return count;
    }
};