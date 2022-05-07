class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());
        
        for(int i=0;i<ransomNote.length();i++){
            int fact=0;
            for(int j=0;j<magazine.length();j++){
                if(magazine[j]==ransomNote[i]){
                    magazine[j] = '0';
                    fact = 1;
                    break;
                }
            }
            if(fact == 0){
                return false;
            }
        }
        return true;
    }
};