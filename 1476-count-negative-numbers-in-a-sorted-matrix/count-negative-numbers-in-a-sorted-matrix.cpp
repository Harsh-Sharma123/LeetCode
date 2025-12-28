class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        int count=0;
        for(int i=0, j=m-1;i<n;i++){
            while(j>=0 && grid[i][j]<0)
                j--;
            // cout << j << endl;
            count += (m-j-1);
        }
        return count;
    }
};