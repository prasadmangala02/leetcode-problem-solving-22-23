class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stk;
        int sum = 0;
        for(int i = 0; i < operations.size(); i++){
            if(operations[i] == "+"){
                if(!stk.empty()) {
                    int first = stk.top();
                    stk.pop();
                    int second = stk.top();
                    stk.push(first);
                    stk.push(first + second);
                    sum += stk.top();
                }
            }
            else if(operations[i] == "C"){
                if(!stk.empty()){
                    sum = sum - stk.top();
                    stk.pop();  
                } 
            }
            else if(operations[i] == "D"){
                if(!stk.empty()){
                    stk.push(2*stk.top());
                    sum += stk.top();
                }
            }
            else {
                stk.push(stoi(operations[i]));
                sum += stk.top();
            }
        }
    
        return sum;
    }
};