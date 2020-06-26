//rotate a 2d arrat by 90degree in cw directiom

class Solution {
public:
    
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
        int n = matrix.size()-1;
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n-i;j++){
                swap(matrix[i][j],matrix[n-j][n-i]);
            }
        } 
  
        
    }
};
