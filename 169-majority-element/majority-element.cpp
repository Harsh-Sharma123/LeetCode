class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> m;
        int ans = 0, max_e = 0;
        for(auto i: nums){
            m[i]++;
        }
        for(auto i: m){
            if(i.second > max_e){
                ans = i.first;
                max_e = i.second;
            }
        }
        return ans;
    }
};