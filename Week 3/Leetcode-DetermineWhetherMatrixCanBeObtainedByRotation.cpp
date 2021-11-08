//  https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // for 90degree rotation -> transpose + mirror image
        
        // transpose the matrix first
        for(int i = 0 ; i < matrix.size() ; i++){
            for(int j = 0 ; j != i ; j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        
        // now find the mirror image of matrix;
        
        for(int i = 0 ; i < matrix.size() ; i++){
            for(int j = 0 ; j < matrix[i].size()/2 ; j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][matrix[i].size() - 1 - j];
                matrix[i][matrix[i].size() - 1 - j] = temp;
            }
        }
    }
    
    bool areEqual(vector<vector<int>> mat, vector<vector<int>> target){
        for(int i = 0 ; i < mat.size() ; i++){
            for(int j = 0 ; j < mat[i].size() ; j++){
                if(mat[i][j]!=target[i][j]){
                    return false;
                }
            }
        }
        
        return true;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {     
        int i=0;
        
        label:
        i++;
        rotate(mat);
        
        if(areEqual(mat, target)){
            return true;
        }
        
        if(i<4){
            goto label;
        }
        
        return false;
    }
};