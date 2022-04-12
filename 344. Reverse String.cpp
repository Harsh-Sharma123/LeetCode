class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> st;
        for(auto i: s){
            st.push(i);
        }
        for(int i=0;i<s.size();i++){
            s[i] = st.top();
            st.pop();
        }
    }
};