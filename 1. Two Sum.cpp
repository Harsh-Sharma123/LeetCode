class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int, int> m;
        vector<int> v;
        
        for(int i=0;i<nums.size();i++){
            int dif = target-nums[i];
            if(m.find(dif)!=m.end()){
                v.push_back(i);
                v.push_back(m.find(dif)->second);
                break;
            }else
                m[nums[i]] = i;
        }
        return v;
    }
};