class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length()-1, j = b.length()-1;
        int x, y, carry = 0;
        string ans = "";
        while(1){
            int sum = 0;
            if(i<0 && j<0) break;
            if(i<0){
                x = 0;
            }else{
                x = a[i] - '0';
            }
            if(j<0){
                y = 0;
            }else{
                y = b[j] - '0';
            }
            sum = x + y + carry;

            if(sum < 2){
                ans += sum+'0';
                carry = 0;
            }else if (sum == 2){
                carry = 1;
                ans += '0';
            }else{
                carry = 1;
                ans += '1';
            }
            i--;
            j--;
        }
        if(carry) ans += carry+'0';
        reverse(ans.begin(), ans.end());
        return ans;
    }
};