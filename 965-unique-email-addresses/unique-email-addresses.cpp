class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> s;
        for(auto i: emails){
            string mail = "";
            int j = 0;
            while(j<i.size() && i[j]!='@'){
                if(i[j] == '.') j++;
                else if(i[j] == '+'){
                    while(i[j]!='@') j++;
                }
                else{
                    mail += i[j];
                    j++;
                }
            }
            while(j < i.size()){
                mail += i[j];
                j++;
            }
            cout << mail << endl;
            s.insert(mail);
        }
        return s.size();
    }
};