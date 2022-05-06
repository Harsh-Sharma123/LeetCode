class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0, ans=0, maxlen=0;
        vector<int> v(256, -1);
        for(int i=0;i<s.length();i++){
            ans = max(ans, v[s[i]]+1);
            int res = i-ans+1;
            maxlen = max(maxlen, res);
            v[s[i]] = i;
        }
        return maxlen;
    }
};