class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        
        pascal.push_back({1});
        vector<int> temp;
    
        
        if(numRows == 1)
            return pascal;
        
        for(int i=1;i<numRows;++i){
            temp.push_back(1);
            
            for(int j=1;j<i;++j){
                temp.push_back(pascal[i-1][j]+pascal[i-1][j-1]);
            }
            
            temp.push_back(1);
            
            pascal.push_back(temp);
            
            temp.clear();
        }
        return pascal;
    }
};