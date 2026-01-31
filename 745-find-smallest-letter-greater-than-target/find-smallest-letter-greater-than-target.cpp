class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        vector<char> ans = letters;
        sort(letters.begin(), letters.end());
        for(auto i: letters){
            if(i > target){
                return i;
            }
        }
        return ans[0];
    }
};