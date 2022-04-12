class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> m;
        
        for(int i=0;i<strs.size();i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            m[temp].push_back(strs[i]);
        }
        
        vector<vector<string>> v;
        for(auto i: m){
            vector<string> temp = i.second;
            v.push_back(temp);
        }
        return v;
    }
};