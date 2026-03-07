class Solution {
public:
    int minFlips(string s) {
        if(s.size()<2)
        return 0;
        int n=s.size();
        // pattern can be either 101010 or 010101
        // we consider here for 010101 and logically the answer for 10101 will be (n-the answer for 010101)
        // here we check the index parity i.e i%2 i.e for odd position it shouls be 1 and for even it should be 0;
        s+=s;
        int ans=INT_MAX;
        int d=0; // counts the mismatch bit for 010101
        for(int i=0;i<s.size();i++)
        {
            if(s[i] != ((i%2)?'1':'0')) // mismatch found
            d++;
            if(i>=n && s[i-n]!=(((i-n)%2)?'1':'0')) // the rotation starts i.e sliding window, now as we slide we remove the value at the leftmost location
            d--;
            if(i>=n-1) // start storing answer after window becomes of n size
            ans=min(ans,min(d,n-d)); // here d is for 0101.. and n-f corresponds to answer for 1010101 pattern

        }
        return ans;
    }
};