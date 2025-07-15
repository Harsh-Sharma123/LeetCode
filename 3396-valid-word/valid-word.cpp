class Solution {
public:
    bool isValid(string word) {
        bool isvalid = false;
        if(word.length() < 3){
            return false;
        }
        bool vowel = false, consonant = false, number = false;
        for(auto i: word){
            if((i>='a' && i<='z') || (i>='A' && i<='Z')){
                if(i=='a' || i=='A' || i=='e' || i=='E' || i=='o' || i=='O' || i=='u' || i=='U' || i=='i' || i=='I') vowel = true;
                else consonant = true; 
            }else if (i>='0' && i<='9') number = true;
            else{
                return false;
            }
        }
        return vowel && consonant;
    }
};