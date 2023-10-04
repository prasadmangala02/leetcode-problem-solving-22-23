class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
         int mr = mat.size(), mc = mat[0].size(), nx = 0, ny = 0;
        if (mr * mc != r * c || mr == r && mc == c) return mat;
        vector<vector<int>> res(r, vector<int>(c));
        for (int cy = 0; cy < mr; cy++) {
            for (int cx = 0; cx < mc; cx++) {
                res[ny][nx++] = mat[cy][cx];
                if (nx == c) nx = 0, ny++;
            }
        }
        return res;
    }
};