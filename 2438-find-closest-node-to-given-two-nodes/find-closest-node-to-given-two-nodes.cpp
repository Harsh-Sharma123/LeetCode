class Solution {
public:
    void dfs(vector<int>& edges, int x, vector<int>& v, int d){
        v[x] = d;
        if(edges[x] == -1) return;
        if(v[edges[x]] == -1) dfs(edges,edges[x],v,d+1);
     /* ^ This condition is to prevent from cycle */
    }

    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        
        int n = edges.size();
        vector<int> v1(n,-1);
        vector<int> v2(n,-1);

        dfs(edges,node1,v1,0);
        dfs(edges,node2,v2,0);

        int dis = INT_MAX;
        int idx = -1;
        for(int i=0; i<n; i++){
            if(v1[i] != -1 && v2[i] != -1){
                if(dis > max(v1[i],v2[i])){
                    dis = max(v1[i],v2[i]);
                    idx = i;
                }
            }
        }
        return idx;
    }
};