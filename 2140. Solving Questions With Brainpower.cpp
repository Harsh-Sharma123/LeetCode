class Solution {
 long long getPoints(int i, vector<vector<int>>& q, vector<long long>& dp)
    {
        if(i >= q.size())
         return 0;

        if(dp[i] != -1)
         return dp[i];
       
       long long solve = q[i][0] + getPoints(i+q[i][1]+1,q,dp);
       long long notSolve = getPoints(i+1,q,dp);

       return dp[i] = max(solve,notSolve);
    }
public:
    long long mostPoints(vector<vector<int>>& q) {
        int n = q.size();
        vector<long long> dp(n,-1);
        return getPoints(0,q,dp);
    }
};
