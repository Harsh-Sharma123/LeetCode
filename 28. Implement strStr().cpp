class Solution {
public:
    int strStr(string haystack, string needle) {
        int hay = haystack.length(), need = needle.length();
        
        for(int i=0;i<hay-need+1;i++){
            if(haystack.substr(i, need) == needle){
                return i;
            }
        }
        
        return -1;
    }
};