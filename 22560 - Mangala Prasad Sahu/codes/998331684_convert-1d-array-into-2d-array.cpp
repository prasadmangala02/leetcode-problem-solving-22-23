class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> result(m,vector<int>(n,0));
        int original_size = original.size();
        int prod = m*n;
        if(original_size != prod){
            return {};
        }
        int k = 0;
        int p = 0, q = 0;
        for (int i = 0 ; i < original_size ; i++){
            result[p][q] = original[i];
            q++;

            if(q == n){
                p++;
                q = 0;
            }
        }
        return result;
    }
};