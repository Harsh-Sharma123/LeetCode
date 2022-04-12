class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c<3) return true;
        long long int a = 0;
        long long int b = sqrt(c);
        
        while(a<=b){
            long long int low = a*a;
            long long int high = b*b;
            
            if(low+high == c) return true;
            else if(low+high < c) a++;
            else b--;
        }
        return false;
    }
};