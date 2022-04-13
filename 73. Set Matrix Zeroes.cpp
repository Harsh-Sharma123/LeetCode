class Solution {
public:
    
    void setZeroes(vector<vector<int>>& matrix) {
       vector<pair<int, int>> ans;
        int n=matrix.size(), m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == 0){
                    ans.push_back({i, j});
                }
            }
        }
        
        for(auto i: ans){
            cout << i.first << " " << i.second << endl;
        }
        
        for(auto &a: ans){
            for(int i=0;i<matrix[0].size();i++){
                matrix[a.first][i] = 0;
            }
            for(int j=0;j<matrix.size();j++){
                matrix[j][a.second] = 0;
            }
        }
    }
};