class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for(int i=0;i<strs[0].size();i++){
            char c = strs[0][i];
            bool check = false;
            for(int j=0;j<strs.size();j++){
                char temp = strs[j][i];
                if(temp == c){
                    check = true;
                }else{
                    check = false;
                    break;
                }
            }
            if(check){
                ans += c;
            }else{
                return ans;
            }
        }
        return ans;
    }
};