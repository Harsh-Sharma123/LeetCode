class Solution {
public:
    int bitwiseComplement(int n) {
      
        if(n==0) return 1;
        unsigned mask = ~0;
        cout << ~0 << endl;
        while(mask & n) mask = mask << 1;
        return ~n ^ mask;
        
    }
};