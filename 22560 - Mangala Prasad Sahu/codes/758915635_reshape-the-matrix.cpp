class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int sm1 = mat.size(), sm2 = mat[0].size(), nx = 0, ny = 0;
        if (sm1 * sm2 != r * c || sm1 == r && sm2 == c) return mat;
        vector<vector<int>> res(r, vector<int>(c));
        for (int i = 0; i < sm1; i++) {
            for (int j = 0; j < sm2; j++) {
                res[ny][nx++] = mat[i][j];
                if (nx == c) nx = 0, ny++;
            }
        }
        return res;
    }
};