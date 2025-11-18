class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();
        int currIndex = 0;

        // If the last bit is 1, it can't possibly be a single-bit "0"
        if (bits.back() == 1) return false;

        while (currIndex < n) {
            if (bits[currIndex] == 0) {
                // A leading 0 always means a one-bit character
                // If this 0 is the last element, then the last character IS "0"
                if (currIndex == n - 1) return true;
                currIndex++; // move forward by 1
            } 
            else {
                // A leading 1 always means a two-bit character ("10" or "11")
                currIndex += 2; // skip both bits
            }
        }

        // If we never returned true, the last character was part of a two-bit code
        return false;
    }
};