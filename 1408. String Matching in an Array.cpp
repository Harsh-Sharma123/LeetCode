class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> v;
        for(auto i: words){
            for(auto j: words){
                if(i==j) continue;
                if(j.find(i)!=-1){
                    v.push_back(i);
                    break;
                }
            }
        }
        return v;
    }
};