class Solution {
public:
    map<int,vector<int>> vis;
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        
        for(int i  = 0 ; i < row ; i++)
            for(int j = 0 ; j  < col ; j++){
                vis[i-j].push_back(mat[i][j]);
            }
        for(int k = -(col-1) ; k<row;k++){
            sort(vis[k].begin(),vis[k].end());
        }
        
        for(int i = row-1 ; i >= 0 ; i--)
            for(int j = col-1 ; j>=0 ; j--){
                mat[i][j] = vis[i-j].back();
                vis[i-j].pop_back();
            }
        return mat;
    }
};