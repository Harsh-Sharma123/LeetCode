class Solution {
public:
    bool isPalindrome(long x) {
        int temp = x;
        if(temp<0)
            return false;
        else{
            long num=0;
            while(temp>0){
                int rev = temp%10;
                if(rev != 0)
                    num = num*10 + temp%10;
                else
                    num *= 10;
                temp /= 10;
            }
            if(x == num)
                return true;
            else
                return false;
        }
    }
};