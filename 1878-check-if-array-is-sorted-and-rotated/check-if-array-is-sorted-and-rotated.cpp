class Solution {
public:
   bool check(vector<int>& nums) {
        int pivot=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1] && pivot==0){
                pivot=1;
            }else if(nums[i]>nums[i+1] && pivot==1) return false;
        }
        if(nums[nums.size()-1] > nums[0] && pivot == 1) return false;
        return true;
    }
};