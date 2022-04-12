class Solution {
public:
    string multiply(string num1, string num2) {
        vector<int> v(num1.size()+num2.size(), 0);
        for(int i=num1.size()-1;i>=0;i--){
            for(int j=num2.size()-1;j>=0;j--){
                v[i+j+1] += (num1[i]-'0')*(num2[j]-'0');
                v[i+j] += v[i+j+1]/10;
                v[i+j+1] %= 10;
            }
        }
        
        string ans = "";
        for(auto i: v){
            
            ans += i+'0';
            
           
            // cout << ans << endl;
        }
        ans.erase(0, min(ans.find_first_not_of('0'), ans.size()-1));
        return ans;

        
    }
};