class Solution {
public:
    int balancedStringSplit(string s) {
        int r=0, l=0, ans=0;
        for(auto i: s){
            if(i=='R') r++;
            if(i=='L') l++;
            if(l==r){
                ans++;
                l=0;r=0;
            }
        }
        return ans;
    }
};