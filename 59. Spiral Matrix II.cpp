class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
       
        int row=n-1, col=n-1, r=0, c=0;
        int val = 0;
        
        vector<vector<int>> v(n, vector<int>(n));

        while(r<=row && c<=col){
           // left to right
            for(int i=c;i<=col;i++){
                v[r][i] = ++val;
             
            }
            // top to bottom
            for(int i=r+1;i<=row;i++){
                v[i][col] = ++val;
            }
            // Checking the left and right limits
            if(r<row && c<col){
                // right to left
                for(int i=col-1;i>c;i--){
                    v[row][i] = ++val;
                }
                // bottom tot up
                for(int i=row;i>r;i--){
                    v[i][c] = ++val;
                }
            }
            r++;
            row--;
            c++;
            col--;
        }
        
        return v;
    }
};700. Search in a Binary Search Tree.cpp