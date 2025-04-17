class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans;
        for(auto i: s){
            if(i == '('){
                if(st.size() > 0){
                    ans.push_back(i);               
                }
                st.push(i);
            }else{
                st.pop();
                if(!st.empty()){
                    ans.push_back(i);                }
            }
        }
        return ans;
    }
};