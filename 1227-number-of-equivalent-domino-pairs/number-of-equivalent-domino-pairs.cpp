class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        map<pair<int, int>, int> m;
        int count=0;
        for(auto i: dominoes){
            int a = min(i[0], i[1]);
            int b = max(i[0], i[1]);
            count += m[{a, b}];
            m[{a, b}]++;
        }
        return count;
    }
    
};