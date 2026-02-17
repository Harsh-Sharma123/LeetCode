class Solution {
public:
    
    int ones(int n){
       int count = 0;
        while(n){
            count++;
            n = n&(n-1);
        }
        return count;
    }
    
    vector<string> readBinaryWatch(int turnedOn) {
        vector<int> hr;
        vector<string> hr_str;
        vector<int> mins;
        vector<string> min_str;
        
        for(int i=0;i<12;i++){
            hr.push_back(ones(i));
            hr_str.push_back(to_string(i));
        }
        for(auto i: hr){
            cout << i << " ";
        }
        for(int i=0;i<60;i++){
            mins.push_back(ones(i));
            string s = to_string(i);
            if(s.size() == 1) s = "0" + s;
            min_str.push_back(s);
        }
        
        
        vector<string> ans;
        for(int i=0;i<hr.size();i++){
            for(int j=0;j<mins.size();j++){
                if(hr[i]+mins[j] == turnedOn){
                    ans.push_back(hr_str[i]+":"+min_str[j]);
                }
            }
        }
        return ans;
    }
};