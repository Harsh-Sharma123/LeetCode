class Solution {
public:
    char kthCharacter(int k) {
        string s = "a";
        while(s.size() < k){
            int size = s.size();
            for(int i=0;i<size;i++){
                char nextchar = 'a' + ((s[i]-'a' ) + 1)%26;
                s += nextchar;
            }
        }
        return s[k-1];
    }
};