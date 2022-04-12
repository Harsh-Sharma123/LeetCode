class Solution {
public:
    string convert(string s, int numRows) {
        
        if(numRows == 1) return s;
        
        vector<string> v(min(numRows, int(s.size())));
        int cur=0;
        bool down = false;
        
        for(char i: s){
            v[cur] += i;
            if(cur==0 || cur==numRows-1)
                down = !down;
            cur += down?1:-1;
        }
        
        string ans;
        for(string i: v){
            ans += i;
        }
        return ans;
    }
};