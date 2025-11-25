class Solution {
public:

    void dfs(int i, vector<int> &vis, vector<int> adj[]){
        vis[i] = 1;
        for(auto it : adj[i]){
            if(!vis[it]){
                dfs(it, vis, adj);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        
        
        int n = isConnected.size(), m = isConnected[0].size();
        vector<int> adj[n];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(isConnected[i][j] == 1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        vector<int> vis(n, 0);
        int count = 0;

        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i, vis, adj);
                count++;
            }
        }
    return count;
    }
};