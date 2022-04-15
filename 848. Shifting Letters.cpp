class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        vector<long long> v;
        v.push_back(shifts.back());
        for(int i=shifts.size()-2;i>=0;i--){
            v.push_back(shifts[i]+v.back());
        }
        reverse(v.begin(), v.end());
        string sample = "abcdefghijklmnopqrstuvwxyz";
        
        for(int i=0;i<s.length();i++){
            long long total = ((s[i]-'a')+v[i])%26;
            char c = sample[total];
            s[i] = c;
        }
        return s;
    }
};