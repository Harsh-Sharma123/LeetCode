class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int ,int> m;
        for(auto i: nums){
            m[i]++;
        }
        int ans = 0;
        for(auto i: m){
            if(i.second > n/2){
                ans = i.first;
            }
        }
        return ans;
    }
};