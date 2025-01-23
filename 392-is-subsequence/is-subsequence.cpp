class Solution {
public:
    bool isSubsequence(string s, string t) {
        stack<char> st;
        for(auto i: s){
            st.push(i);
        }
       for(int i=t.size()-1; i>=0 ; i--){
            if(st.empty()) return true;
            if(t[i] == st.top()){
                st.pop();
            }
       }
       if(st.empty()) return true;
       return false;
    }
};