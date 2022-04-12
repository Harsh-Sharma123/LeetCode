class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int pos=0;
        for(int i=0;i<matrix.size();i++){
            int last = matrix[i].size();
            if(target>=matrix[i][0] && target<=matrix[i][last-1]){
                pos = i;
                break;
            }
        }
        for(int i=0;i<matrix[pos].size();i++){
            if(matrix[pos][i]==target){
                return true;
            }
        }
        return false;
    }
};