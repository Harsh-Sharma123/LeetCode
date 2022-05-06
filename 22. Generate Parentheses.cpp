class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        string s="";
        int open=0, close=0;
        generate(open, close, s, v, n);
        return v;
    }
    
    void generate(int open, int close, string s, vector<string> &v, int n){
        if(s.length() == n*2){
            v.push_back(s);
            return ;
        }
        if(open < n){
            generate(open+1, close, s+'(', v, n);
        }
        if(open > close){
            generate(open, close+1, s+')', v, n);
        }
    }
};