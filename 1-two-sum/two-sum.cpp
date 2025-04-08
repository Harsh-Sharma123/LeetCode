class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        // for(int i=0;i<nums.size()-1;i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i] + nums[j] == target){
        //             v.push_back(i);
        //             v.push_back(j);
        //             break;
        //         }
        //     }
        // }
        // return v;

        map<int, int> m;
        for(int i=0;i<nums.size();i++){
            int left = target - nums[i];
            if(m.find(left) != m.end()){
                v.push_back(m[left]);
                v.push_back(i);
                break;
            }
            m[nums[i]] = i;
        }
        return v;

    }
};