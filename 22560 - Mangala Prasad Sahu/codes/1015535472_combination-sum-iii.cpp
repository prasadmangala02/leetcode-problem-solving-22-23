class Solution {
private:
    void backtrack(int k,int start, int rem, vector<vector<int>>&result, vector<int> &path){
        if(rem == 0 && k == 0){
            result.push_back(path);
            return;
        }
        else if(rem < 0) return;
        
        for(int i = start ; i <= 9 ; i++){
            // if((i > ) && candidates[i] == candidates[i-1]) continue;
            
            path.push_back(i);
            // rem -= candidates[i];
            backtrack(k - 1, i + 1, rem - i, result, path);        
            path.pop_back();
        
        }
    }

public:
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<vector<int>> result;
        vector<int> path;
        int rem = n;
        int start = 1;
        backtrack(k, start, rem, result, path);
        return result;
        
    }
};
