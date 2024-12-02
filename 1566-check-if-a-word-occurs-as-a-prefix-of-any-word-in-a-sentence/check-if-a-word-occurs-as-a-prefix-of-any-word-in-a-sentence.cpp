class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int start = 0, idx = 1;

        for(int i=0;i<=sentence.size();i++){
            if(sentence[i] == ' ' || i == sentence.size()){
                string prefix = sentence.substr(start, searchWord.size());
                if(searchWord == prefix) return idx;
                start = i+1;
                idx++;
            }
        }
        return -1;
    }
};