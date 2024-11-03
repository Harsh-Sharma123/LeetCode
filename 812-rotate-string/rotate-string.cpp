class Solution {
public:
    
    void rotate(string &s){
        char c=s[0];
        for(int i=0;i<s.length()-1;i++){
            s[i]=s[i+1];
        }
        s[s.length()-1]=c;
    }
    
    bool rotateString(string s, string goal) {
        for(int i=0;i<s.length();i++){
            rotate(s);
            if(s==goal) return true;
        }
        return false;
    }
};