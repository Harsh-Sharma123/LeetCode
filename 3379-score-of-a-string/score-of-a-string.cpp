class Solution {
public:
    int scoreOfString(string s) {
        int ans = 0;
        for(int i=0;i<s.size()-1;i++){
            int diff = abs(s[i]-s[i+1]);
            ans += diff;
        }
        return ans;
    }
};