class Solution {
private:
    void backtrack(vector<int>& candidates, int start, int rem, vector<vector<int>>&result, vector<int> &path){
        if(rem == 0){
            result.push_back(path);
            return;
        }
        else if(rem < 0) return;
        
        for(int i = start ; i < candidates.size() ; i++){
            if((i > start) && candidates[i] == candidates[i-1]) continue;
            path.push_back(candidates[i]);
            // rem -= candidates[i];
            backtrack(candidates, i+1, rem - candidates[i], result, path);        
            path.pop_back();
        
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> result;
        vector<int> path;
        int rem = target;
        int start = 0;
        backtrack(candidates, start, rem, result, path);
        return result;
    }
};