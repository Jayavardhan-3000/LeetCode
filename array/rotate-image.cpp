class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i , j, len = matrix.size(), temp;
        for(i = 0; i < len; i++){
            for(j = i; j < len; j++){
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }

        }
        for(i = 0; i < len; i++){
            for(j = 0 ; j < len/2; j++){
                temp =matrix[i][j]; 
                matrix[i][j] = matrix[i][len-j-1];
                matrix[i][len-j-1] =temp;
            }

        }
    }
};