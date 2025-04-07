class Solution {
public:
    bool check(vector<int>& nums) {
        int flag = 0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1] && flag == 0) flag = 1;
            else if(nums[i]>nums[i+1] && flag == 1) return false;
        }
        if(flag && nums[0]<nums[nums.size()-1]) return false;
        return true;
    }
};