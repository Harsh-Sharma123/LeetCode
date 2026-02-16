class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        for(int i=31;i>=0;i--){
            int l = n&1;
            if(l==1){
                ans += (1<<i);
            }
            n >>= 1;
        }
        return ans;
    }
};