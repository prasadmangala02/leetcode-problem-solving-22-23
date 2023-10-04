class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int size = temperatures.size();
        vector<int> ans(size, 0);
        stack<int> stk;
        for(int i = 0; i < size; i++){
            while(!stk.empty() && temperatures[i] > temperatures[stk.top()]){
                int prevIndex = stk.top();
                ans[prevIndex] = i - prevIndex;
                stk.pop();
            }
            stk.push(i);
        }

        return ans;
    }
};