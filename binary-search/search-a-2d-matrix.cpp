class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size() - 1, i;
        for(i = 0; i < matrix.size(); i++){
            if(target <= matrix[i][n]){
                if(target == matrix[i][n]) return true;
                break;
            }
        }

            if(i == matrix.size()) return false;
        
        return binary_search(matrix[i].begin(), matrix[i].end(), target);
    }
};