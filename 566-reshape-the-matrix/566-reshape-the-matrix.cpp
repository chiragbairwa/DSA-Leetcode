class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        
        int newRow = 0;
        int newColumn = 0;
        
        vector<vector<int>> res( r,vector<int>(c) );
        
        if(r*c!=m*n)
            return mat;
        
        //iterating result array manually
        for(int i=0; i<m; i++){
            for(int j=0; j<n ; j++){
                res[newRow][newColumn] = mat[i][j];
                newColumn++;
                
                if(newColumn>=c){
                    newColumn = 0;
                    newRow++;
                }
            }
        }
    
        return res;
    }
};