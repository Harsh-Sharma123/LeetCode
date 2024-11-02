class Solution {
public:
    string makeFancyString(string s) {
        int n=s.size();
        if(n==1) return s;
        stack<char> st;
        st.push(s[0]);
        st.push(s[1]);
        int x=0, y=1, i=2;
        while(i<n){
            if(s[i]==s[x] && s[i]==s[y]){
                x++;
                y++;
            }else {
                st.push(s[i]);
                x++;
                y++;
            }
            i++;
        }
        string ans="";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};