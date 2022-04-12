class Solution {
public:
    int reverse(int x) {
        int temp = x;
        int flag=1;
        int num=0;
        if(temp<0){
            temp = abs(temp);
            flag = 0;
        }
        while(temp>0){
            int pop = temp%10;
            if (num > INT_MAX/10 || (num == INT_MAX / 10 && pop > 7)) return 0;
            if (num < INT_MIN/10 || (num == INT_MIN / 10 && pop < -8)) return 0;
            num = num*10 + temp%10;
            temp /=10;
        }
        if(flag==1)
            return num;
        else
            return -num;
    }
};