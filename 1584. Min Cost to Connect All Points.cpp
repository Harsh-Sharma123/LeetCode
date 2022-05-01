class Solution {
public:
    
    int parent[1001];
    
    int findparent(int a){
        if(parent[a]<0){
            return a;
        }
        return parent[a] = findparent(parent[a]);
    }
    
    void merge(int a, int b){
        parent[a] = b;
    }
    
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        
        for(int i=0;i<n;i++) parent[i] = -1;
        
        vector<pair<int, pair<int, int>>> v;
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int weight = abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]);
                v.push_back({weight, {i, j}});
            }
        }
        
        sort(v.begin(), v.end());
        
        int sum=0;
        
        for(int i=0;i<v.size();i++){
            int a = findparent(v[i].second.first);
            int b = findparent(v[i].second.second);
            
            if(a!=b){
                sum += v[i].first;
                merge(a, b);
            }
        }
        return sum;
    }
};