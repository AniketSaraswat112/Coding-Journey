class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool columnContains0 = false, rowContains0 = false;
        for(int i = 0; i<matrix.size(); i++){
            for(int j = 0; j<matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    if(j == 0) columnContains0 = true;
                    if(i == 0) rowContains0 = true;
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for(int i = 1; i<matrix[0].size(); i++){
            if(matrix[0][i] == 0){
                for(int j = 0; j<matrix.size(); j++){
                    matrix[j][i] = 0;
                }
            }
        }

        for(int i = 1; i<matrix.size(); i++){
            if(matrix[i][0] == 0){
                matrix[i].assign(matrix[i].size(), 0);
            }
        }

        if(columnContains0){
            for(int i = 0; i<matrix.size(); i++){
                matrix[i][0] = 0;
            }
        }
        if(rowContains0){
            matrix[0].assign(matrix[0].size(), 0);
        }
    }
};