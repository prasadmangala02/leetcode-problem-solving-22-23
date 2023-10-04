class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        int size1 = arr.size();
        int size2 = arr.size()/2;
        
        int removed = 0;
        int result = 0;
        
        // unordered_map<int,int>freqMap;
        // for (int i=0;i<size1;i++) {
        //     freqMap[arr[i]]++;
        // }
        
        unordered_map<int,int>freqMap;
        for(auto f:arr){
            freqMap[f]++;
        }
        
        priority_queue<int> freqQ;
        for(auto c:freqMap){
            freqQ.push(c.second);
        }
        
        
        while(removed < size2){
            removed += freqQ.top();
            freqQ.pop();
            result++;
        }
        return result;
    }
};