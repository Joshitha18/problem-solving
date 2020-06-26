//Given a m x n matrix, if an element is 0, set its entire row and column to 0. Do it in-place.

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    vector <bool> firstrow(matrix[0].size(),false);
        
        for(int i=0;i<matrix.size();i++){
            if(find(matrix[i].begin(),matrix[i].end(),0) != matrix[i].end()){
                for(int j=0;j<matrix[i].size();j++){
                    if(matrix[i][j]==0){firstrow[j]=true;}
                    else matrix[i][j]=0;
                }
            }
        }
        
        
        for(int i=0;i<matrix[0].size();i++){
            if(firstrow[i]==true){
                for(int j=0;j<matrix.size();j++){
                    matrix[j][i]=0;
                }
            }                             
        }
        
    }
};
