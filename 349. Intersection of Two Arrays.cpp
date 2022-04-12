class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(int i=0;i<nums1.size();i++){
            int ele = nums1[i];
            if(std::find(nums2.begin(), nums2.end(), ele) != nums2.end()){
                if(std::find(v.begin(), v.end(), ele)==v.end()){
                    v.push_back(ele);
                }
            }
        }
        return v;
    }
};